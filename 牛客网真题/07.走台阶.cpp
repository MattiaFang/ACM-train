#include<iostream>
using namespace std;
int fun1(int n) //走一级和走两级
{
	if(n == 1)
	{
		return 1;
	}
	else if(n == 2)
	{
		return 2;
	}
	else
	{
		return fun1(n-1)+fun1(n-2);
	}
}
int fun2(int n)  //走一级和走两级和走三级
{
	if(n == 1)
	{
		return 1;
	}
	else if(n == 2)
	{
		return 3;
	}
	else if(n == 3)
	{
		return 4;
	}
	else
	{
		return fun2(n-3)+fun2(n-2)+fun2(n-1);
	}
}
int fun3(int n)     //走两级和走三级
{
	if(n == 1)
	{
		return 0;
	}
	else if(n == 2)
	{
		return 1;
	}
	else if(n == 3)
	{
		return 1;
	}
	else
	{
		return fun3(n-2)+fun3(n-3);
	}

}
int main()
{
	int n ;
	cin>>n;
	cout<<fun1(n)<<" "<<fun2(n)<<" "<<fun3(n)<<endl;
	system("pause");
	return 0;
}
