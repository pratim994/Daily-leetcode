class Solution {
public:
    bool hasAllCodes(string s, int k) {
        unordered_set<string> set = {};
        for(int  i = 0; i+k<= s.size(); i++){
            set.insert(s.substr(i,k));
        }
        return set.size() == (int)pow(2, k);
    }
};


//holy fuck this sucks , solving lc after a hard gym sesh 
// But I am blessed, blessed to struggle, blessed to have a chance at life
// that many might not

//anyways no more of that sob stroy and approach of the problem
//I have understood the problem at first glance but could'nt implemment
//okay implement a set data structure
// iterate through the string every 'K' intervals and push
//calculate the size of the set at the end of iteration
//use a ternary condional check wether set.size() == pow(2,k) 