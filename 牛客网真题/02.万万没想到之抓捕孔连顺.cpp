//滑动窗口
#include<iostream>
using namespace std;
int main()
{
    long long N,D,count=0,a[1000000]={0};
    cin>>N>>D;
    for(long long i=0,j=0;i<N;i++)
    {
        cin>>a[i];
        while( i>=2 && (a[i]-a[j])>D )
        {
            j++;
        }
        count += (i-j-1)*(i-j)/2;        //j的位置肯定布置一个人，再任意选择两个人的位置就可以求组合数
    }
    count = count % 99997867;
    cout<<count<<endl;
}