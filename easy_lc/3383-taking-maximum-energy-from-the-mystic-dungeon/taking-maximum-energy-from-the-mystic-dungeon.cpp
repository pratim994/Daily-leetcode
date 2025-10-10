class Solution {
public:
    int maximumEnergy(vector<int>& e, int k) {
    int n = e.size();
    vector<int> dp(n+1);
    int ans  = INT_MIN;
        for(int i = n-1;i>=0;--i){
                dp[i] = e[i]+((i+k<n)?dp[i+k]:0);
                ans = max(ans, dp[i]);
        }
        return ans;
    }
};