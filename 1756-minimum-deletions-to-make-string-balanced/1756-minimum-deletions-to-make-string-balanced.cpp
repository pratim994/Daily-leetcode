class Solution {
public:
    int minimumDeletions(string s) {
        int cnt = 0, n = s.size(), a = 0, b=0;
        for(char ch : s)
            a+= ch&1;

        for(char ch : s){
            a -= ch&1;
            n = min(n, a+b);
            b += ~ch&1;
        }
      return n;
    } 
};

