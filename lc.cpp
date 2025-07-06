#include<iostream>
#include<vector>
#include<algorithm>
using namespace  std;



class Solution {
public:
    int findLucky(vector<int>& arr) {
        int freq[501] ={0}, xMax = 0;
        for(int x :arr){
            freq[x]++;
            xMax = max(x, xMax);
        }
        for(int x = xMax; x>=1; x--){
            if(freq[x]==x) return x;
        }
        return -1;
    }
};

int main(){
    Solution sol;
    int n;
    cout<<"enter the length of the array";cin>> n;
    vector<int> arr(n);
    cout<<"enter"<<n<<"integers:\n";
    for(int i = 0; i<n;i++){
        cin >> arr[i];
    }
    int result = sol.findLucky(arr);
    cout<<"lucky number"<<result <<endl;
    return 0;
}