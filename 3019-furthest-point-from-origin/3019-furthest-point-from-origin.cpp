class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {

        int cntD = 0 , cntL = 0 , cntR =0;

        for(auto c : moves){

            if(c == '_') cntD++;

            if(c == 'R') cntR++;

            if(c == 'L') cntL++;
        }

        return cntD + std::abs(cntL-cntR);
        
    }
};

// return cnt of '_' and abs(L-R)