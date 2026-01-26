class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int minDiff = INT_MAX;int n = arr.size();
        vector<vector<int>> pairDiff;
        sort(arr.begin(), arr.end());
        for(int i = 0; i< n -1 ; i++){
            minDiff = min(minDiff, abs(arr[i+1]-arr[i]));
            }

        for(int i = 0; i<n-1; i++){
            int diff = arr[i+1]-arr[i];
            if(diff == minDiff)
                pairDiff.push_back({arr[i], arr[i+1]});
           }
    return pairDiff;
        }   
        
    };


auto init = [](){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 'c';
}();