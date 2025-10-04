class Solution {
public:
    string minWindow(string s, string t) {
        vector<int> map(128,0);
        for(auto c : t) map[c]++;
        int counter = t.size(), begin = 0, end = 0, d = INT_MAX, head =0;
        while(end<s.size()){
            if(map[s[end++]]-->0) counter--;
            while(counter==0){
                if(end-begin<d) d = end-(head=begin);
                if(map[s[begin++]]++==0) counter++;
            }
        }
        return d==INT_MAX?"":s.substr(head,d);
    }
};
//string comparison will cause o(n^2) for 10^5 , nightmare scenario
//so the order of t doesnt matter as long as s contains them
//why not just initialise 