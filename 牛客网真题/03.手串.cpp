#include<iostream>

using namespace std;
int main()
{
	int n,m,c,a[1000][51]={0};//[串珠号][颜色号]
    int sum=0,bad=0;//sum记录颜色出现次数，bad记录颜色不合法个数
    cin>>n>>m>>c;//n为串珠个数，m为连续多少串珠距离不能包含相同颜色，c为颜色个数
    for(int i=0;i<n;i++)//i表示串珠
    {
        int num_i;
        cin>>num_i;//串珠多少种颜色
        for(int j=1;j<=num_i;j++)
        {
            cin>>k;//k为颜色号
		
            a[i][k]=1;//第i个串珠包含的颜色标记为1
        }
    }
    
    for(int j=1;j<=c;j++)   //按照颜色遍历（1~c）
    {
        bool out=false;//表示颜色不合格结束循环
		for(int i=0;i<n;i++)//串珠遍历（0~（n-1））
        {
            sum=0;
			
            for(int o=0;o<m;o++)//o表示离目标串珠距离，当然要从目标串珠开始
            {
                int temp=i+o;
                if(temp>=n)//首尾相连
                {    
                     temp=temp-n;
                }
                if(a[temp][j]==1)//出现颜色记录[串珠号][颜色号]
                {
                    sum++;
                }
                if(sum>1)//在指定距离内该颜色出现2次
                {
                     bad++;//表示该颜色不合格
					 out=true;//退出
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