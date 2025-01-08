class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;
        if (matrix.empty()) return result;

        int M = matrix.size();    
        int N = matrix[0].size(); 
        int i = 0, j = 0;         
        
        
        vector<int> di = {0, 1, 0, -1}; 
        vector<int> dj = {1, 0, -1, 0}; 
        int d = 0; 

        while (result.size() < M * N) {
            result.push_back(matrix[i][j]);
            matrix[i][j] = 999;  
            
           
            int i2 = i + di[d];
            int j2 = j + dj[d];
            
            
            if (i2 < 0 || i2 >= M || j2 < 0 || j2 >= N || matrix[i2][j2] == 999) {
                d = (d + 1) % 4;
                i2 = i + di[d];
                j2 = j + dj[d];
            }
            
            i = i2;
            j = j2;
        }
        
        return result;
    }
};