class Solution {
public:
    int minNumberOperations(vector<int>& t) {
      int n = t.size(), res = t[0];
      

      for(int i = 1;i<n;i++){
        res += max(t[i]-t[i-1],0);
      }
        return res;
    }
};