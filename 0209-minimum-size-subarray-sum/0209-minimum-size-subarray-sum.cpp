class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int  minL = INT_MAX, sum = 0, i = 0, j =0;
        while(j < n)
        {
            sum += nums[j];
            
            while(sum >= target)
            {
                minL = min(minL,  j - i + 1);

                sum -= nums[i];

                i++;
            }
            j++;
        }
        return minL == INT_MAX ? 0 : minL;
    }
};

// ok so rather than intilize a prefix table or iterate in o(n^3)
// I am gonna start counting
//start at the 0th index , continue until sum = target
// if sum > target , then compare between another variable 
// min(count-1, minL);
//return it