#include<iostream>
#include<string.h>
using namespace std;

#define MAX 50

//�����������ս��
int MinCount(const char* p);
//�����ַ����������ַ��Ⱥ��׼���򣬷��ش���
int Sort(char*p,int len,char,char);
//��������
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
	if(len>MAX)//�ж��ַ��������Ƿ����
	{
		cout<<"too long ,man!"<<endl;
		return -1;
	}
	for(i=0;i<len;i++)//�ж��ַ��Ƿ���ȷ
	{
		if((p[i]!='C')&&(p[i]!='D'))
		{
			cout<<"err"<<endl;
			return -1;
		}
	}
	strcpy(tmp,p);
	//���ַ�ʽ��������Ĵ���
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
	//1���������ұ���
	for(i=0;i<len;i++)
	{
		j=i;
		//������Dʱ����
		//�ж��ѳ���A�ĸ�����������A���������˳�ѭ��
		if(p[i] == a)
		{
			tmpNum++;
			if(tmpNum == numA)
			{
				break;
			}
			continue;
		}
		//2��������Bʱ
		else
		{
			//3����һ��Ԫ����Bʱ�������ж��¸�Ԫ���Ƿ�ΪB
			while(p[j]!=a)
			{
				j++;
			}
			//����A��������+1
			tmpNum++;
			//ÿ�ν�������λ�ã�����������һ
			while(j>i)
			{
				Swap(p[j],p[j-1]);
				nCount++;
				j--;
			}
			//4���ж��ѳ���A�ĸ�����������A���������˳�ѭ��
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
