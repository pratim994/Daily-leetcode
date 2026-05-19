class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        
        int n = nums1.size(), m = nums2.size();

        int p1 = 0, p2 =0;

        for(; p1 <n && p2 < m  ; )
        {
            int x = nums1[p1] ,  y = nums2[p2];

            if(x == y) return x;

            else if (x > y) p2++;

            else p1++;
        }
    return  -1;
        }
};


// logic framing :
// iterate through both the array 
// check if they have elements that are similar 
// initialize a global variable ans = INT_MAX
// comapare the minimum value with ans and common integer using std::min 
// check for latency use constexpr and I/O desycnhronization for improvements