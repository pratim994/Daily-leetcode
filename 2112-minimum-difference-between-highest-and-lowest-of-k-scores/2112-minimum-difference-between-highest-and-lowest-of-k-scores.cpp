class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        if(nums.size() == 1) return 0;

        const int n = nums.size();
        
        sort(nums.begin(), nums.end());
        int ans = nums[k-1] - nums[0];
        for(int i = 0; i + k <= n ; i++){
            ans = min(ans, nums[i+k-1] - nums[i]);
        }
        return ans;
    }
};
//optimizers here
auto init = [](){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 'c';

}();

//naive approach for this problem I have come up with is 
//iterate through the array , select k nums 
// decalre a var = INT_MAX and compare each previous one 
// and return  it 
//also some edge cases to mind is if nums.sie == 1 then return 0