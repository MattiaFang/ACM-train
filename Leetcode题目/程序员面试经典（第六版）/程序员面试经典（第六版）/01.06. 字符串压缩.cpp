class Solution {
//双指针
public:
    string compressString(string S) {
        int len =S.size(),sum=0,i=0,j=0;
        string ans ="";
        while(j<len)
        {
            if(S[i]==S[j])
            {
                sum++;
            }
            else
            {
                ans += S[i];
                ans += to_string(sum);    //    int转string：  to_string() 
                i=j;
                sum=1;
            }
            j++;
        }
        ans += S[i];
        ans += to_string(sum);
        if(ans.size()<len)
            return ans;
        else
            return S;
    }
};