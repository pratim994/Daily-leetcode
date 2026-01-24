class Solution {
public:
   int minPairSum(vector<int>& nums) {
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

//I wanna decifer the logic before I code first 
//sort the array 
// add largest with smallest and 2nd largest with 2nd smallest, so on and so forth !