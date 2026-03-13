class Solution {
public:
typedef long long ll ;

bool Check(ll mid ,  vector<int>& w, int m)
{
        ll h = 0;

        for(int& t : w)
        {
            h += (ll)(sqrt(2.0 * mid / t + 0.25) - 0.5);

                if(h == m)
                {
                    return true;
                }
        }
        return  h >= m;
}
    long long minNumberOfSeconds(int m, vector<int>& w) {
        int maxT = *max_element(w.begin(), w.end());
        ll l = 1;

        ll r =  (ll)m*maxT*(m+1)/2;

        ll result  = 0;

        while(l <= r){
            ll mid = l + (r-l)/2;

            if(Check(mid, w, m))
            {
                result = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        return result;
    }
};
