class Solution {
public:
    bool CheckPermutation(string s1, string s2) {
        if(s1.size()==s2.size())
        {
            int a[26]={0};
            for(int i=0;i<s1.size();i++)
            {
                a[s1[i]-'a']++;
            }
            for(int i=0;i<s2.size();i++)
            {
                a[s2[i]-'a']--;
            }
            for(int i=0;i<26;i++)
            {
                if(a[i]!=0)
                {
                    return false;
                }
            }
        }
        else
        {
            return false;
        }
        return true;
    }
};