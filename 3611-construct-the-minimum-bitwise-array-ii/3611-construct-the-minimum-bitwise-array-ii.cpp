class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
    vector<int> jjj;
    for(int n : nums){
        if(n&1){
            int z = ((n+1)&~n)>>1;
            jjj.push_back(n&~z);
        }
        else{
            jjj.push_back(-1);
        }
    }        
    return jjj;

    }
};