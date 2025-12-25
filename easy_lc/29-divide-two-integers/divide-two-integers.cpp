class Solution {
public:
    int divide(int dividend, int divisor) {
        if (divisor == 1)
            return dividend;
        if (divisor == -1)
            return dividend == INT_MIN ? INT_MAX : -dividend;

        // Convert both numbers to negatives
        // and count how many negative signs we have
        bool isPositive = (dividend > 0) == (divisor > 0);
        int a = dividend > 0 ? -dividend : dividend;
        int b = divisor > 0 ? -divisor : divisor;

        int ans = 0;
        while (a <= b) {
            int temp = b, multiple = 1;
            // Prevent overflow on left shift
            while (temp >= (INT_MIN >> 1) && a <= (temp << 1)) {
                temp <<= 1;
                multiple <<= 1;
            }
            a -= temp;
            ans += multiple;
        }

        return isPositive ? ans : -ans;
    }
};