#pragma GCC optimize("O3")

class Solution {
public:
   constexpr vector<int> twoSum(vector<int>& numbers, int target) {
        
        const int n =  numbers.size();

        int i = 0, j = n-1;

        while(i < j){

            int sum = numbers[i]+numbers[j];

            if(sum > target)

                j--;

            if (sum < target)
                 i++;

            else if(sum == target){
                return {i+1, j+1};

            }
        }

        return {};
    }

};

auto init = [](){
    ios::sync_with_stdio(0);

    cin.tie(0);
    cout.tie(0);
    return 'c';
}();