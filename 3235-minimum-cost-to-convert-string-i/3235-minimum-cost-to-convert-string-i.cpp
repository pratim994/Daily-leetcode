// Use Floyd Warshall's algorithm with bit mask
int D[26][26];// global variables
class Solution {
public:
    static inline void FW(vector<char>& original, vector<char>& changed, vector<int>& cost){
        fill(&D[0][0], &D[0][0]+26*26, INT_MAX);
        const int sz=original.size();
        unsigned rMask=0, cMask=0;// masks for row & col
        for (int i=0; i<sz; i++){
            const int row=original[i]-'a';
            const int col=changed[i]-'a';
            rMask|=(1<<row), cMask|=(1<<col);// update for masks
            D[row][col]=min(D[row][col], cost[i]);
        }
        for (int i=0; i<26; i++) D[i][i]=0;

        for(int k=0; k<26; k++){
            for( unsigned r=rMask; r; r&=(r-1)){// use row mask
                const int i=countr_zero(r);
                if (D[i][k]==INT_MAX) continue;
                for( unsigned c=cMask; c; c&=(c-1)){// use col mask
                    const int j=countr_zero(c);
                    D[i][j]=min((long long)D[i][j], (long long)D[i][k]+D[k][j]);
                }
            }
        }

    }

    static long long minimumCost(string& source, string& target, vector<char>& original, vector<char>& changed, vector<int>& cost) 
    {
        FW(original, changed, cost);
        const int n=source.size();
        long long ans=0;
        for(int i=0; i<n; i++){
            int row=source[i]-'a';
            int col=target[i]-'a';
            if (D[row][col]==INT_MAX) return -1;
            ans+=D[row][col];
        }
        return ans;
    }
};

auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 'c';
}(); 