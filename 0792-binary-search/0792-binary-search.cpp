class Solution {
public:
    constexpr int search(vector<int>& nums, int target) {
        
        int low = 0, high = nums.size() - 1;

        while(low <= high){

            int pivot = low + (high - low)/2;

            if(nums[pivot] == target) 

                return pivot;

            if(nums[pivot] < target)

                low = pivot + 1;

            if(nums[pivot] > target)

                high = pivot - 1;
        }

        return -1;
    }
};