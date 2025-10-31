class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int, int> freqMap;
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
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