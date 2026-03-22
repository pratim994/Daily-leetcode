#pragma GCC optimize("O3")

class Solution {
public:
 constexpr  int coinChange(vector<int>& coins, int amount) {

        vector<int> dp(++amount);

        dp[0] = 0 ;

        sort(begin(coins), end(coins));

        for(int i = 1; i < amount ;i++){

            dp[i] = INT_MAX;

            for(int c : coins){

                    if(i - c < 0 ) break;

                    if(dp[i-c] != INT_MAX) dp[i] = min(dp[i], 1+dp[i-c]);

            }
        }        

        return dp[--amount] ==INT_MAX  ?  -1 : dp[amount];

    }
};


auto  init = []() {

    ios::sync_with_stdio(false);


    cin.tie(nullptr);

    cout.tie(nullptr);

    return 'c';

}();

