class Solution {
public:
    int countValidSelections(vector<int>& nums) {
        int n = nums.size(), right = 0, left =0, count =0;
        for(int v  : nums) right += v;
        for(int i = 0;i<n;i++){
            left += nums[i];
            right -= nums[i];
            if(nums[i]!=0) continue;
            if(right == left) count+=2;
            if(abs(left-right) ==1) count++;
     
        }
        return count;
    }
};

//I have 16 hrs a day and in no way in hell will I not become legendary in programming problem I waste it all being unaware . More awareness and less slop
