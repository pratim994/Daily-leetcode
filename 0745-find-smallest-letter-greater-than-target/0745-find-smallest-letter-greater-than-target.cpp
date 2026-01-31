class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        for(char ch : letters){
            if(ch > target){
                return ch;
            }
        }
        return letters[0];
    }
};

//sorted character array 
//return the smallest lexicographical character bigger than target char
//can use a lamba but why make life complicated 
//if no character is present that is > target; return  letter[0]
//apparently amazon , bloomberg and linkedIN asked this lol :D