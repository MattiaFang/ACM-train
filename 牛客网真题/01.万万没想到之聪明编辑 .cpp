#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,nums=0;
    string str="";
    cin>>n;
    while(n--)
    {
		char pre=' ';//存放当前字符
		int state=0;//表明状态
		string str="";//存放目标字符串

		cin>>str;
		char last = str[0];//初始化为第一个字符

		string ans;
		ans+= str[0];//初始化

		for (int i = 1; i < str.size(); ++i) //从第二个字符开始
		{
            pre = str[i];
            switch (state)
            {
            case 0:
            {
                if (pre == last)  //如果是相等的，进入状态1，否则继续状态0；
                    state = 1;    //进入状态1：AA形式
                else 
					state = 0;   //继续状态0：AB形式，即正常形式
                break;
            }
            case 1:
            {
                if (pre == last)
                    continue;//AAA,忽略即可
                else
                    state = 2;//进入状态3：AAB形式
                break;
            }
            case 2:
            {
                if (pre == last)
                    continue;//AABB，忽略即可
                else
                    state = 0;//AABC，就是状态0
                break;
            }
            default:
                break;
            }
            ans = ans + pre;
            last = pre;       //更新字符
        }
        cout << ans << endl;
    }
	system("pause");
	return 0;
}