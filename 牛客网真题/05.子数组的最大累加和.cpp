class Solution {
public:
    /**
     * max sum of the subarray
     * @param arr int整型vector the array
     * @return int整型
     */
    int maxsumofSubarray(vector<int>& arr) {
        // write code here
        int sum = 0;
        int max = 0;
        for(int i=0;i<arr.size();i++)
        {
            sum += arr[i];
            if(sum<=0)          //如果sum小于等于0，就重新开始计数，就去掉前面部分不与前面数相连
            {
                sum = 0;
            }
            if(sum>max)         //如果计数大于当前最大值，更新
            {
                max = sum;
            }
        }
        return max;             //输出最大值
    }
};