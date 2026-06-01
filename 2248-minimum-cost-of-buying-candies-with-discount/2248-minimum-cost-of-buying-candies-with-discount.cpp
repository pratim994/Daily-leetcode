class Solution {
public:
    int minimumCost(vector<int>& cost) {

        int costs = 0;

        sort(cost.begin(), cost.end(), greater<int>());

        for(int i = 0 ; i < cost.size(); i++){

            if( i%3 != 2){
                costs += cost[i];
            }
        }
        
        return costs;
    }
};


// seems like an array problem  
// for every two candies you get one candy free and it must be less than both of the candies 

// sort the array in a reversed way  pick the first 2 large values you get third one free , and don't need to check manually from every single remaining array elements

// have a check for arrays size less than 3 , if it is then return the acuumululated value 
// other wise keep negating i+2 th value from the accumulated sum