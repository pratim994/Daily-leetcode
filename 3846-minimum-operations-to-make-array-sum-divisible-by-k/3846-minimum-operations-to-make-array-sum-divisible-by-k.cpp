#include <numeric>

class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        
        auto sum = accumulate(nums.begin(), nums.end(), 0);

        return sum%k;
    }
};