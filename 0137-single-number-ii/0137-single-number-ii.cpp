class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int , int> freqMap;
        for(auto& n : nums){
            freqMap[n]++;
        }   
        for(auto& i : freqMap)
            if(i.second == 1){
            return i.first;
    
                }
                return 0;
           }
};