class Solution {
public:
    int countMonobit(int n) {
      if(n == 1) return 2;
      if(n == 0) return 1;
      int count =0;
      map<int, int> p ={{2,2},{3, 3}, {7,4}, {15, 5}, {31,6}, {63,7},{127,8},{255,9}, {511,10}};
        for(auto x : p){
            if (n >= x.first)
                count =  x.second;
        }

    return count;      

    }
};

//first base case is if a number is > 1 , it must be initialized with count = 2;
// 2nd I think its a trick question because no even number is ever gonna have monobit
// I just found out that there are only 4 monobit intergersfrom 1 to 100