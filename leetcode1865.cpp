#include<vector>
#include<algorithm>
#include<Unordered_map>
#include<iostream>
using namespace std;




class FindSumPairs {
private:
    vector<int> a,b;
    unordered_map<int,int> map;
public:
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        a = nums1; b = nums2;
        for(int c : b){
            map[c]++;
        }
    }
    
    void add(int index, int val) {
        map[b[index]]--;
        b[index] += val;
        map[b[index]]++;
        }
    
    int count(int tot) {
        int cnt = 0;
        for(int c :a){
            cnt+= map[tot-c];
        }
        return cnt;
    }
};

int main(){
    int n1, n2;
    cout<<"enter the size of first array  :\n";
    cin>>n1;
    vector<int> nums1(n1);
    cout<<"enter the elements of nums1";
    for ( int i =0;i<n1;i++) cin>>nums1[i];
    cout<<"enter the length of second array :\n";
    cin>>n2;
    vector<int> nums2(n2);
    cout<<"enter the elements of elements of second array: \n";
    for(int i = 0;i<n2;++i) cin>>nums2[i];

    FindSumPairs obj(nums1, nums2);
    int q;
    cout<<"enter no of operations";
    cin>>q;

    cout<<"enter operations (format: add index val / count tot):\n";
    while(q--){
        string op;cin>>op;
        if(op == "add"){
            int index, val;
            cin>>index >>val;
            obj.add(index, val);
            cout<< "added" <<val<<" to index" <<index <<"\n";   
        }
        else if (op == "count"){
            int tot;
            cin>>tot;
            int res = obj.count(tot);
            cout<<"count("<<tot<<")="<<res<<"\n";
        }
        else{
                cout<<"invalid operation";
        }
    }





    return 0;
}