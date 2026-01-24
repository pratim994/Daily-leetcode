class Solution {
public:
  constexpr int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size(); int x = 0;
        vector<int> pairs;
        for(int i = 0, j = n-1; i <=n -1 && j >= 1; i++ , j--){
            x = nums[i] + nums[j];
            pairs.push_back(x);
        }
        return *max_element(pairs.begin(), pairs.end());   
    }
};

auto init = []()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();


