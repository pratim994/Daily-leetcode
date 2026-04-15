class Solution {
public:
    int closestTarget(vector<string>& words, string target, int start) {

        const int n = words.size(); 

        for(int i = 0 ; i <= (n >> 1) ; i++)

            if(words[(start + i)%n] == target  |

              words[(start - i +n)%n] == target) return i;

        
            return -1; // proof by negation
    }
};
// okay so circular my ass 
// a simple find and counter operation to to return the index if exists else -1
// okay so rather than only having left -> right traversal we go bidirectional and return the minimum of it 
