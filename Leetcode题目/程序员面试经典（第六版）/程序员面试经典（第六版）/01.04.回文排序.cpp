//freq数组记录s中各个字符出现次数
//当freq中有两个字符的次数为奇数时则不是回文串的排列
Solution {
public:
    bool canPermutePalindrome(string s) {
        //记录频数
        int freq[256] = { 0 };
		for (char c : s)
			freq[c]++;

		//记录奇数出现次数
		int res = 0;
		for (int i = 0; i < 256; i++)
		{
			if (freq[i] % 2 != 0) {
				res++;
				if (res == 2) {
					return false;
				}	
			}
		}
		return true;
    }
};