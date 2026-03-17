class Solution {
public:
    int largestSubmatrix(vector<vector<int>>& matrix) {
        int m = matrix.size() , n = matrix[0].size(), res =0;

            for(int row = 1; row < m; row++){
                for(int col = 0; col < n; col++){
                    if(matrix[row][col] == 1){
                        matrix[row][col] += matrix[row-1][col];
                    }
                }
            }

        for(int i = 0; i < m ; i++){
            sort(matrix[i].rbegin(), matrix[i].rend());

            for(int  j = 0; j < n; j++){
                res = max(res, matrix[i][j]*(j+1));

    }
    }

    return res;

    }
};