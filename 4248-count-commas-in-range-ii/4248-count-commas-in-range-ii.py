class Solution:
        
    def countCommas(self, n: int) -> int:
        if n < 1000:
            return 0

        else:
            sum,p = 0,1000

            while p <= n:
                sum += n - p +1
                p*=1000

            return sum

