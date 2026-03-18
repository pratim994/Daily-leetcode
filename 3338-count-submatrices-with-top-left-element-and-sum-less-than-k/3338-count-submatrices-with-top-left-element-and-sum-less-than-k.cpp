class Solution {
public:
    int countSubmatrices(vector<vector<int>>& grid, int k) {
        int m = grid.size() , n = grid[0].size(), cnt = 0;

        vector<vector<int>> p(m+1, vector<int>(n+1,0));

    for(int i = 0 ; i < m; i++) {
         for(int j = 0 ; j< n; j++) {

            p[i+1][j+1] = grid[i][j]+p[i+1][j] + p[i][j+1] - p[i][j];


            if(p[i+1][j+1] <= k)
                cnt++;
         }
    }
        
        return cnt;
           
    }
};