#include<iostream>
using namespace std;
int main()
{
    char c; 
    int state =0;
    string ans="";
    while(cin>>c)
    {
        if(c == '(')
        {
            state ++;
        }
        if(state == 0 && c != '<')
        {
            ans += c;
        }
        if(c == ')')
        {
            state --;
        }
        if(c == '<'&& state == 0)
        {
            int n = ans.size();
            if(n != 0)
                ans.resize(n-1);
        }
    }
    cout<< ans<<endl;
    return 0;
}