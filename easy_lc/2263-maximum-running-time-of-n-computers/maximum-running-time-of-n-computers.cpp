class Solution {
public:
    long long maxRunTime(int n, vector<int>& arr) {
        sort(arr.begin(), arr.end());
        long long total  = accumulate(arr.begin(), arr.end(), 0LL);
        for(int i = arr.size() -1;i>=0;i--){
            if(arr[i]<= total/n) break;
            total -= arr[i];
            n--;
        }
        return total/n;
    }
};

//n no of computers
// array of batteries where battery[i] == battert[i] mins
// at i = 1 you can only insert 1 battery then you can add or remove as many as you desire
//inserted battery can be new or old ones with remaining charge