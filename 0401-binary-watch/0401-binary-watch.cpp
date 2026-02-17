class Solution {
public:
    vector<string> readBinaryWatch(int turnedOn) {
        vector<string> s;
       for(int hh = 0; hh <= 11; hh++){
        for(int mm = 0; mm <= 59; mm++){
            if(__builtin_popcount(hh) + __builtin_popcount(mm) == turnedOn){
                string hr = to_string(hh); 
                string mn = (mm < 10? "0":"" ) + to_string(mm);

                s.push_back(hr + ":" + mn);


            }
        }

       }
       return s;
    }
};