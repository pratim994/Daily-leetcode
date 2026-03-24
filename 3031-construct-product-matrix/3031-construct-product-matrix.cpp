
typedef long long ll;

class Solution {
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {

        const int mod = 12345;

        int m = grid.size() , n = grid[0].size();      

        ll suffix = 1 , prefix = 1;
        vector<vector<int>> p(m, vector<int>(n,0));  


        for(int  i = m - 1; i >= 0 ; i--) {

            for(int j = n - 1; j >= 0; j--) {

                p[i][j] = suffix;

                suffix = (suffix*grid[i][j]) % mod;
            }
        }

        for(int i = 0; i < m ; i++) {

            for(int j = 0 ; j < n ;j++){

                    p[i][j] = (prefix * p[i][j])%mod;

                    prefix = (prefix*grid[i][j])%mod;
            }

        }


        return p;
    }
};


