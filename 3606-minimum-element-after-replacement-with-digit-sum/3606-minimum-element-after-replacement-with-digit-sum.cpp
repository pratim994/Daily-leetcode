class Solution {
public:
    int minElement(vector<int>& nums) {

      int ans = 0;

      for(int i = 0; i < nums.size(); i++){

        int offset = 0;
            while(nums[i] > 0){

                offset += nums[i]%10;
                nums[i]/=10;
            }
            nums[i] = offset;

      }
        
        return *std::min_element(nums.begin(), nums.end());
    }
};