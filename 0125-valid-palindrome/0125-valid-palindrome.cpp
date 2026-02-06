class Solution {
public:

    
    bool isPalindrome(string s) {
       int start = 0, end = s.size()-1;
       while(start <= end ){
        if(!isalnum(s[start])) {start++;}
        if(!isalnum(s[end])){end--;}
        if(tolower(s[start])!= tolower(s[end])) return false;
        else{
            start++;
            end--;
        }
       }
       return true;
    }
};

//construct a new string without whitespaces and lowercase it
//recursively search the string and if the iterator crosses n/2 then it i indeed true