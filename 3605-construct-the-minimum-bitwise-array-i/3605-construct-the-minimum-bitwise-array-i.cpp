class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        vector<int> bitMSSS;

        for(int n : nums){
             if(n&1){
                int z = ((n+1)& ~n)>>1;
                bitMSSS.push_back( n & (~z));
             }
             else{
                bitMSSS.push_back(-1);
             }
        }
        return bitMSSS;
    }
};