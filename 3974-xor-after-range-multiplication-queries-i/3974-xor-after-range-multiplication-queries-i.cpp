class Solution {
public:
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
            const int mod = 1e9+7;

            int ans = 0;

            int n = queries.size();

          for(auto q : queries)
          {
            int l = q[0];

            int r = q[1];

            int k = q[2];

            int v = q[3];

            while(l <= r){
                nums[l] = (1LL*nums[l]*v)%mod;

                l += k;
            }
          }

            for(int &n  : nums){

                ans ^= n;
            }
            return ans;


    }
};