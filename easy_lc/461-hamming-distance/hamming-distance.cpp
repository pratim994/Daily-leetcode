class Solution {
public:
    int hammingDistance(int x, int y) {
        int hamXor  = x^y;
        int ans  = 0;
        while(hamXor>0){
            ans  += hamXor&1;
            hamXor>>=1;
        }
        return ans;
    }
};