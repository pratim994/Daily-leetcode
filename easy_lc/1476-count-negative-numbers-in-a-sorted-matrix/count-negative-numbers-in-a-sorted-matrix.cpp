class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        //naive approach
        int m = grid.size(), n = grid[0].size(), cnt = 0;
        int i = m-1, j =0;
        while(i >= 0 && j < n){
            if(grid[i][j]<0){
                cnt += n -j;
                 --i;
            }
            else
                j++;
        }
        return cnt;
    }
};