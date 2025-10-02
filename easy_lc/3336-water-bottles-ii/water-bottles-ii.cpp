class Solution {
public:
    int maxBottlesDrunk(int B, int n) {
        
     int ans = B;
     while(B>= n){
        B -= n-1, n++, ans++;
     }
        return ans;
    }
};