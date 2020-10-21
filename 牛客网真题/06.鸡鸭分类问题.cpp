#include<iostream>
#include<string.h>
using namespace std;

#define MAX 50

//函数返回最终结果
int MinCount(const char* p);
//输入字符串并按照字符先后标准排序，返回次数
int Sort(char*p,int len,char,char);
//交换函数
void Swap(char &,char &);

int main()
{
	char p[MAX];
	int n = 0;
	memset(p,0,MAX);
	cout<<"please input"<<endl;
	cin>>p;
	n=MinCount(p);
	cout<<"minium count is:"<<n<<endl;
	system("pause");
	return 0;
}

int MinCount(const char* p)
{
	int i =0 , m1 = 0, m2 = 0;
	int len = strlen(p);
	char tmp[MAX];
	if(len>MAX)//判断字符串长度是否合理
	{
		cout<<"too long ,man!"<<endl;
		return -1;
	}
	for(i=0;i<len;i++)//判断字符是否正确
	{
		if((p[i]!='C')&&(p[i]!='D'))
		{
			cout<<"err"<<endl;
			return -1;
		}
	}
	strcpy(tmp,p);
	//两种方式排序所需的次数
	m1 = Sort(tmp,len,'C','D');
	cout<<"method1:"<<m1<<endl;
	strcpy(tmp,p);
	m2 = Sort(tmp,len,'D','C');
	cout<<"method2:"<<m2<<endl;
	return min(m1,m2);
}

int Sort(char*p,int len,char a,char b)
{
	int i =0,j=0;
	int nCount = 0;
	int numA = 0,tmpNum = 0;
	for(i = 0;i < len;i++)
	{
		if(p[i]==a)
		{
			numA++;
		}
	}
	//1、从左向右遍历
	for(i=0;i<len;i++)
	{
		j=i;
		//当遇到D时不变
		//判断已出现A的个数，若等于A的总数则退出循环
		if(p[i] == a)
		{
			tmpNum++;
			if(tmpNum == numA)
			{
				break;
			}
			continue;
		}
		//2、当遇到B时
		else
		{
			//3、下一个元素是B时，继续判断下个元素是否为B
			while(p[j]!=a)
			{
				j++;
			}
			//出现A，次数再+1
			tmpNum++;
			//每次交换两个位置，交换次数加一
			while(j>i)
			{
				Swap(p[j],p[j-1]);
				nCount++;
				j--;
			}
			//4、判断已出现A的个数，若等于A的总数则退出循环
			if(tmpNum == numA)
			{
				break;
			}
		}
	}
	return nCount;
}

void Swap(char &a,char &b)
{
	int temp = a;
	a = b;
	b = temp;
}
