class Solution {
public:
   constexpr int maximumJumps(vector<int>& nums, int target) {

        int n = nums.size();

        std::vector<int> dp(n+1,INT_MIN);

        dp[n-1] = 0;

        for(int i = n-2; i >= 0; i--){

            for(int j = i+1; j < n; j++){

                int offset = std::abs(nums[i] - nums[j]);


                if(offset <= target && dp[j] != INT_MIN){

                    int temp = dp[j]+1;

                    dp[i] = std::max(dp[i], temp);

                }
            }

        }

        return dp[0] < 0  ? -1 : dp[0];
        
    }
};

auto init = [](){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();