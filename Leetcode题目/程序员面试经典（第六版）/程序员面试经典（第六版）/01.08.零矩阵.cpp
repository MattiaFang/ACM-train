class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int han[10000]={0},lie[10000]={0},k=0;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(matrix[i][j]==0)
                {
                    han[k]=i;
                    lie[k]=j;
                    //cout<<i<<"  "<<j<<endl;
                    k++;
                }
            }
        }
        for(int p=0;p<k;p++)
        {
            for(int i=0;i<matrix.size();i++)
            {
                matrix[i][lie[p]]=0;
            }
            for(int i=0;i<matrix[0].size();i++)
            {
                matrix[han[p]][i]=0;
            }
        }
    }
};