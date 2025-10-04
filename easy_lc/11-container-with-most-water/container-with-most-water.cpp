class Solution {
public:
  constexpr  int maxArea(vector<int>& h) {
        int i =0;
        int j = h.size()-1;
        int res = 0;
        while(i<j){
            res = max(res,(j-i)*(min(h[i], h[j])));
            if(h[i]<h[j]) i++;
            else j--;
        }
        return res;
    }
};