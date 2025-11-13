class Solution {
public:
   constexpr int maxOperations(string s) {
       int result  =0;
       int ones =0;
       int use = false;
       for(char ch : s){
        if(ch == '0'){
            use = true;

        }else{
            if(use){
                result += ones;
                use = false;
            }
            ones++;
            use = false;
        }
        }
        if(use){
            result += ones;
        }
        return result;
       
    }
};