class Solution {
public:
int minPair(vector<int> v){
    int pos = -1;
    int minSum = 1e9;
    for(int i = 0; i< (int)v.size()-1; i++){
        if(v[i] +v[i+1] < minSum){
            minSum = v[i]+v[i+1];
            pos = i;
        }

    }


    return pos;
}


void merge(vector<int>& v, int pos){
    v[pos] += v[pos+1];
    v.erase(v.begin() + pos +1);
}
    int minimumPairRemoval(vector<int>& nums) {
        int ops =0;
        while(!is_sorted(nums.begin(), nums.end())){
            merge(nums, minPair(nums));
            ops++;

        }   
return ops;

    }
};