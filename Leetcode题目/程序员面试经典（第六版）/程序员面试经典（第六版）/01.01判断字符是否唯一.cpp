#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str="abcdeafg";              //测试字符输入
	int a[26]={0};
	bool isastr=true;                   //判断是否唯一
	for(int i=0;i<str.size();i++)
	{
		a[str[i]-'a']++;
		if(a[str[i]-'a']>1)
		{
			isastr=false;
		}
	}
	//打印数组
	/*for(int i=0;i<26;i++)
	{
		cout<<"i="<<i<<"a[i]为"<<a[i]<<"      ";
	}*/
	if(isastr)
	{
		cout<<"True"<<endl;
	}
	else
	{
		cout<<"False"<<endl;
	}
	system("pause");
	return 0;
}