class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
       
         int cnt =0;
        sort(capacity.begin(),capacity.end(), greater<int>());
        int apsum =  accumulate(apple.begin(), apple.end(),0);

        while(apsum > 0){
            apsum -= capacity[cnt++];
        }
        return cnt;
  
    }

};