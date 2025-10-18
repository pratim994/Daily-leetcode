class Solution {
public:
  constexpr  int maxDistinctElements(vector<int>& nums, int k) {
        int n = nums.size(), ans  =0;
        sort(nums.begin(),nums.end() );
        int prev = -1e9;
        for(int i =0;i<n;i++){
            int l = max(nums[i]-k, prev+1);
            if(l<= nums[i]+k){
                prev = l, ans++;
            }
        }
        return ans;
    }
};