class Solution {
public:
    int numWaterBottles(int B, int n) {
       
        return B+(B-1)/(n-1);
    }
};