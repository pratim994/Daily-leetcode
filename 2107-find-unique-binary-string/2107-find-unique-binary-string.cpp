class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
      unordered_set<int> st;
      
       int n = nums.size();


      for(auto& it : nums){
        st.insert(stoi(it ,  nullptr, 2));
      }
      for(int i = 0; i < 1<<n; i++){
        if(st.count(i) == 0){
           string s = bitset<32>(i).to_string();
           return s.substr(32-n);
        }
      }

      return "";
    }
};