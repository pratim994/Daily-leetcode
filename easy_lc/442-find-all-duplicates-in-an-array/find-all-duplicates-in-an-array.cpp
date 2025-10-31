class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int, int> freqMap;
        for(int i = 0;i<nums.size();i++){
            freqMap[nums[i]]++;
        }
        for(auto& e : freqMap){
            if(e.second == 2){
                ans.push_back(e.first);
            }
        }
        return ans;
    }
};