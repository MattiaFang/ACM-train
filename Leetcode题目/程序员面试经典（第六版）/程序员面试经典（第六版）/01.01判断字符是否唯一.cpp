#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str="abcdeafg";              //�����ַ�����
	int a[26]={0};
	bool isastr=true;                   //�ж��Ƿ�Ψһ
	for(int i=0;i<str.size();i++)
	{
		a[str[i]-'a']++;
		if(a[str[i]-'a']>1)
		{
			isastr=false;
		}
	}
	//��ӡ����
	/*for(int i=0;i<26;i++)
	{
		cout<<"i="<<i<<"a[i]Ϊ"<<a[i]<<"      ";
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