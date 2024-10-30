class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int M = matrix.size(), N = matrix[0].size();
        vector<int> up(N);   // Column markers for zeros
        vector<int> left(M); // Row markers for zeros

        // First pass: mark the rows and columns that should be zero
        for (int i = 0; i < M; i++) {
            for (int j = 0; j < N; j++) {
                if (matrix[i][j] == 0) {
                    up[j] = 1;    // Mark this column for zeroing
                    left[i] = 1;  // Mark this row for zeroing
                }
            }
        }

        // Second pass: Set rows to zero based on the left markers
        for (int i = 0; i < M; i++) {
            if (left[i] == 1) {
                for (int j = 0; j < N; j++) {
                    matrix[i][j] = 0;
                }
            }
        }

        // Third pass: Set columns to zero based on the up markers
        for (int j = 0; j < N; j++) {
            if (up[j] == 1) {
                for (int i = 0; i < M; i++) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};
