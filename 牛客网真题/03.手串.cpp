#include<iostream>

using namespace std;
int main()
{
	int n,m,c,a[1000][51]={0};//[�����][��ɫ��]
    int sum=0,bad=0;//sum��¼��ɫ���ִ�����bad��¼��ɫ���Ϸ�����
    cin>>n>>m>>c;//nΪ���������mΪ�������ٴ�����벻�ܰ�����ͬ��ɫ��cΪ��ɫ����
    for(int i=0;i<n;i++)//i��ʾ����
    {
        int num_i;
        cin>>num_i;//�����������ɫ
        for(int j=1;j<=num_i;j++)
        {
            cin>>k;//kΪ��ɫ��
		
            a[i][k]=1;//��i�������������ɫ���Ϊ1
        }
    }
    
    for(int j=1;j<=c;j++)   //������ɫ������1~c��
    {
        bool out=false;//��ʾ��ɫ���ϸ����ѭ��
		for(int i=0;i<n;i++)//���������0~��n-1����
        {
            sum=0;
			
            for(int o=0;o<m;o++)//o��ʾ��Ŀ�괮����룬��ȻҪ��Ŀ�괮�鿪ʼ
            {
                int temp=i+o;
                if(temp>=n)//��β����
                {    
                     temp=temp-n;
                }
                if(a[temp][j]==1)//������ɫ��¼[�����][��ɫ��]
                {
                    sum++;
                }
                if(sum>1)//��ָ�������ڸ���ɫ����2��
                {
                     bad++;//��ʾ����ɫ���ϸ�
					 out=true;//�˳�
                     break;
                }
             
            }
			if(out)
			{
				break;
			}
             
        }
             
    }
	cout<<bad<<endl;
	/*for(int i=0;i<50;i++)
	{
		for(int j=1;j<=50;j++)
		{
			cout <<a[i][j]<<" ";
		}
		cout<<endl;
	}*/
 
    system("pause");
    return 0;
}