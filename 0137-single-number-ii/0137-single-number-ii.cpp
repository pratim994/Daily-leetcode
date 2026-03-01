class Solution {
public:
    int singleNumber(vector<int>& nums) {
       int ones = 0, twos =0;
       for(auto& i : nums){
        ones ^= (i & ~twos);
        twos ^= (i & ~ones);
       }
       return ones;
           }
};

//so this was a naive iterative solution solution 
// O(2n) t.s and O(n) s.c.

//now lets try bit manipulation