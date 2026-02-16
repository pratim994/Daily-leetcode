class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt =0, cand = 0;

        for(int n : nums){
            if(cnt == 0){
                cand = n;
            }
            if(n == cand){
                cnt++;
            }
            else{cnt--;}
        }
      return cand;
    }
};