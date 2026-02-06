class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int l = 1, i =0, j = 0, maxEl = nums[0], minEl = nums[0];

        while(j < n){
            minEl = nums[i]; maxEl = nums[j];

            while( i < j && maxEl > (long long)k*minEl){
                i++;
                minEl = nums[i];

            }
            l =  max(l, j - i+1);
            j++;
        }
        return n -l;
    }
};

