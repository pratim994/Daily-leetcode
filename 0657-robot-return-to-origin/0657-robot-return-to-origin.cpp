class Solution {
public:
    bool judgeCircle(string moves) {

            //map<char, int> mp = {{'U', 1}, {'D' , -1}, {'R' , 1}, {'L', -1} };

            int l = 0 , r = 0, u = 0, d = 0;

            for(auto c : moves){

                if(c == 'L' ) l++;

                if(c == 'R' ) r++;

                if(c == 'U') u++;

                if(c == 'D') d++;
            }

        if((l == r) && (u == d)){  return true;}            


        return false;

    }
};