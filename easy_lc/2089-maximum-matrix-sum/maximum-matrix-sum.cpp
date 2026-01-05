class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
    int minabs  = INT_MAX, cntneg = 0;        
     long long ans = 0;
        for(auto& row : matrix){
            for(int x : row){
                minabs = min(minabs, abs(x));

            
            if(x < 0){
                ans -= x;
                cntneg++;
            }else{
                ans += x;
            }
        }
        }
        return (cntneg&1)?ans-2*minabs:ans;
    }
};


