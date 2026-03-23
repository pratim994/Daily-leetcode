#pragma GCC optimize

class Solution {
public:


    void merge(vector<int>& nums1, vector<int>& nums2){

        for(auto &it : nums2){

            nums1.push_back(it);
        }

        sort(begin(nums1), end(nums1));

    }

    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        

        merge(nums1, nums2);

        if(nums1.size()%2 == 1){

            return static_cast<double>(nums1[nums1.size()/2]);
        }

        else {


                double mid1 = nums1[nums1.size()/2];

                double mid2 = nums1[nums1.size()/2 - 1];

                return (static_cast<double>(mid1)+ static_cast<double>(mid2))/2;

        }


    }
};

auto init = [](){

    ios::sync_with_stdio(0);

    cin.tie(0);

    cout.tie(0);

    return 'c';
}();