#include<iostream>
using namespace std;

int Cal(int y,int m, int d)
{
	if(m==1||m==2)
	{
		m+=12;
		y--;
	}
	int iWeek = (d+2*m+3*(m+1)/5+y+y/4-y/100+y/400)%7;
	return iWeek + 1;
}
int main()
{
	int T;
	cin>>T;
	for(int i=0;i<T;i++)
	{
		int y1,m1,d1,y2,m2,d2;
		cin>>y1>>m1>>d1>>y2>>m2>>d2;
		if(Cal(y1,m1,d1)==Cal(y2,m2,d2))
		{
			cout<<"True"<<endl;
		}
		else
		{
			cout<<"False"<<endl;
		}
	}
	system("pause");
	return 0;
}