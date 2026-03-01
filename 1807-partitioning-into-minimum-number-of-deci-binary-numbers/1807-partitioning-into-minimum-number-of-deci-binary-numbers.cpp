class Solution {
public:
    int minPartitions(string n) {
        vector<int> abc;
       for(auto ch : n){
            abc.push_back(ch-'0');
       }
       int x = n.size()-1;
       return *max_element(abc.begin(), abc.end());
    }
};

///lets see if my wrong approach works or nah
// first I create a array or set to store the integer values and return the greatest of it
