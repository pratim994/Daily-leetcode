class Solution {
public:
    double champagneTower(int poured, int q, int qg) {
        double tower[102][102] ={0.0};
        tower[0][0]= (double)poured;
        for(int r = 0; r<=q;r++){
            for(int c = 0; c <= r; c++){
                if(tower[r][c] > 1.0){
                    double excess = (tower[r][c] - 1.0)/2.0;
                    tower[r][c] = 1.0;
                    tower[r+1][c] += excess;
                    tower[r+1][c+1]  += excess;

                }
            }
        }   
        return tower[q][qg];
    }
};