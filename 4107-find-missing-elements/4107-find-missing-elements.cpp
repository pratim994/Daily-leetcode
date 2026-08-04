class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {

        vector<int> ans;

        sort(nums.begin(), nums.end());

        for(int i =1; i<nums.size(); i++){

                if(nums[i] - nums[i-1] > 1)
                {
                    int missing = nums[i]-nums[i-1];
                    int offset = nums[i-1];
                    while(missing > 1){
                        
                        offset++;

                        ans.push_back(offset);
                        missing--;
                    }
                }

        }

        return ans;
        
    }
};