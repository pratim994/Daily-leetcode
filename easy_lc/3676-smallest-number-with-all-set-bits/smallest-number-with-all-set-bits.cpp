class Solution {
public:
    int smallestNumber(unsigned n) {
      return bit_ceil(n+1)-1;
    }
};

//set bits difference doubles every iteration, like 1-3, 3-7,7-15, 15-31, 31-63