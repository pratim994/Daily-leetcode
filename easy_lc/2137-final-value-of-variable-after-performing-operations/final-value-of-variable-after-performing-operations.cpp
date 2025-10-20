class Solution {
public:
    int finalValueAfterOperations(vector<string>& op) {
        int ans =0;
        for(auto& o : op){
                ans += (o[1]=='+')?1:-1;
        }  
        return ans;
    }
};