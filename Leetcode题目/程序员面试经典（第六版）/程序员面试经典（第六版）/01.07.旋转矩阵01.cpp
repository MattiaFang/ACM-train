class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int length = matrix.size();
        auto matrix_new = matrix; // C++ 这里的 = 拷贝是值拷贝，会得到一个新的数组
                                  // 这样取值就不会被替代
        for (int i = 0; i < length; ++i) {
            for (int j = 0; j < length; ++j) {
                matrix_new[j][length - i - 1] = matrix[i][j];
            }
        }
        matrix = matrix_new;        // 同样也是值拷贝
    }
};