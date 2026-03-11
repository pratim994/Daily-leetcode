class Solution {
public:
    int bitwiseComplement(int n) {
        int count  = 0, rs =0;
    if(n == 0) return 1;
        while(n)
        {
            int r = n%2;
            rs += pow(2, count)*!r;
            count++;
            n = n>>1;
        }  
      return rs;
    }
};