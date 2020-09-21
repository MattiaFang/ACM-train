class Solution {
public:
    bool oneEditAway(string first, string second) {
        if(first==second)
            return true;
        int len_1=first.size();
        int len_2=second.size();
        if(len_1-len_2>1||len_2-len_1>1)
        {
            return false;
        }
        if(first==""||second=="") 
            return true;
        int i=0,j=len_1-1,k=len_2-1;
        while(i<len_1&&i<len_2&&first[i]==second[i])
        {
            i++;
        }
        while(k>=0&&j>=0&&first[j]==second[k])
        {
            j--;
            k--;
        }
        return j-i<1&&k-i<1;
    }
};