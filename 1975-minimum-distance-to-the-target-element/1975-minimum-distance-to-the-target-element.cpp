class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {

        int mogMaxx = nums.size();

        for(int i = 0; i < nums.size();i++)
        {
            if(nums[i] == target)
            {
               
                mogMaxx = std::min(mogMaxx , abs(i-start));
            }


        }
        
        return  mogMaxx;
    }
};