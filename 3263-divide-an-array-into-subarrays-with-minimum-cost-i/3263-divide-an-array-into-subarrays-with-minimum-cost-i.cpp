class Solution {
public:
    int minimumCost(vector<int>& nums) {
        
        int n = nums.size();

     
       std::sort(nums.begin()+1, nums.begin()+n);
      int  cost = nums[0] + nums[1]+nums[2];
        return cost;
    }
};