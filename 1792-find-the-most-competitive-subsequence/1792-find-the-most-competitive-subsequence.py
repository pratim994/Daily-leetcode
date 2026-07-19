class Solution:
    def mostCompetitive(self, nums: List[int], k: int) -> List[int]:

        stack = []
        n = len(nums)

        for index, value in enumerate(nums):

            while stack and stack[-1] > value and len(stack) + n - index > k:
                stack.pop()

            if len(stack) < k:
                stack.append(value)

        return stack

            