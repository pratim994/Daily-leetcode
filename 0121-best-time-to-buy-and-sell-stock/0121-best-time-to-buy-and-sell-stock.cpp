class Solution {
public:
   constexpr int maxProfit(vector<int>& prices) {

            int n = prices.size(), proft = 0;

            int mini = prices[0];

            for(int i = 1; i < n ; i++){

                int  cost = prices[i]-mini;

                 proft = max(proft, cost);

                mini = min(mini, prices[i]);
            }
        
        return proft;
    }
};

auto init = [](){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    return 'c';
}();