#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<sstream>
using namespace std;
int main()
{
	vector<string>v;
	string temp;
	while(cin>>temp)
	{
		stringstream ss(temp);//把temp的内容放入ss输入流里
		string str;
		while(getline(ss,str,','))//按照指定的分隔符
		{
			v.push_back(str);
		}
		//v.push_back(temp);
		if(cin.get()=='\n')
		{
			sort(v.begin(),v.end());
			for(auto j:v)
			{
				cout<<j<<",";
			}
			cout<<endl;
			v.clear();
		}
	}
	return 0;
}