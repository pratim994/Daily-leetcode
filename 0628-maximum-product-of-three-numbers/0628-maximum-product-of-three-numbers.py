class Solution:
    def maximumProduct(self, nums: List[int]) -> int:
        
        nums.sort()
        n = len(nums)-1
        ans = max(nums[0]*nums[1]*nums[n], nums[n]*nums[n-1]*nums[n-2])

        return ans