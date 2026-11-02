class Solution {
public:
    int minMoves2(vector<int>& nums) {
        
        int32_t ans = 0;

        std::sort(nums.begin(), nums.end());
        int median = nums[nums.size()/2];

        for(int n : nums){

            ans += abs( n- median) ; 
        }        

    return ans;
    }
};
