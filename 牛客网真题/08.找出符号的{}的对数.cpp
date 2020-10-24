#include<iostream>
#include<map>
#include<algorithm>
#include<string>
using namespace std;
int doWork(char ch,int ps,map<int,map<char,int>> status)
{
	//cout<<ch<<endl;
	 char p;
	 if(ch == '{' ) 
		 p = 'B';
     else if(ch == '}' ) 
		 p = 'C';
	 else 
		 p = 'A';

     ps = (int)status[ps][p];
	 return ps;
}

int main()
{
	map<int,map<char,int>> status;
	map<char,int> star0;
	star0.insert(pair<char,int>('A',0));
	star0.insert(pair<char,int>('C',0));
	star0.insert(pair<char,int>('B',1));
	map<char,int> star1;
	star1.insert(pair<char,int>('A',3));
	star1.insert(pair<char,int>('B',2));
	star1.insert(pair<char,int>('C',4));
	map<char,int> star2;
	star2.insert(pair<char,int>('A',3));
	star2.insert(pair<char,int>('B',2));
	star2.insert(pair<char,int>('C',4));
	map<char,int> star3;
	star3.insert(pair<char,int>('A',3));
	star3.insert(pair<char,int>('B',1));
	star3.insert(pair<char,int>('C',4));
	map<char,int> star4;
	star4.insert(pair<char,int>('A',0));
	star4.insert(pair<char,int>('B',1));
	star4.insert(pair<char,int>('C',4));

	status.insert(pair<int,map<char,int>>(0,star0));
	status.insert(pair<int,map<char,int>>(1,star1));
	status.insert(pair<int,map<char,int>>(2,star2));
	status.insert(pair<int,map<char,int>>(3,star3));
	status.insert(pair<int,map<char,int>>(4,star4));

	int ps = 0;
	int sum_1 =0,sum_2=0;//sum_1:{  sum_2:}
	int num =0;
	string s= "aavvfs{{def}}{}{{";
	char ch;
	for(int i=0;i<s.size();i++)
	{
		ch = s[i];
		ps = doWork(ch,ps,status);
		if(ps==0)
		{
			if(sum_1==sum_2 && sum_1 != 0)
			{
				num++;
			}
			sum_1 = 0;//清零
			sum_2 = 0;
		}
		if(ps==1)
		{
			if(sum_1==sum_2 && sum_1 != 0)
			{
				num++;
			}
			sum_1 = 1;//清零
			sum_2 = 0;
		}
		if(ps==2)
		{
			sum_1++;
		}
		if(ps==4)
		{
			sum_2++;
		}
	}
	if(sum_1==sum_2 && sum_1 != 0)
	{
		num++;
	}
	cout<<num<<endl;
	system("pause");
	return 0;
}