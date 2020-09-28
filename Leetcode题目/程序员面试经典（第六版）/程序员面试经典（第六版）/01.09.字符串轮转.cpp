class Solution {
public:
    bool isFlipedString(string s1, string s2) {
        if(s1.size()==0&&s2.size()==0)
            return true;
        if(s1.size()!=s2.size())
            return false;
        string str;
        int i=0,pos=0;
        while(i<s1.size())
        {
            if(s1[0]==s2[i])
            {
                pos=i;
                str.append(s2,pos,s1.size()-pos);
                str.append(s2,0,pos);
                //cout<<str<<endl;
                if(str==s1)
                    return true;
            }
            i++;
            str="";
        }
        return false;
    }
};