class Solution {
public:
    int findGCD(vector<int>& nums) {

        int m = *min_element(nums.begin(),nums.end());

        int n = *max_element(nums.begin(), nums.end());
        int ans =1;

        while(m > 0 && n > 0){

                if (n >m) n %= m;

                else m %= n;
            

        }
        if (m == 0) return n;

        else return m;
        
    }
};