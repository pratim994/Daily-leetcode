class Solution:
    def pivotArray(self, nums: List[int], pivot: int) -> List[int]:
        
        p = []
        less = []
        more = []

        for num in nums:

            if num < pivot:

                less.append(num)

            elif num > pivot:

                more.append(num)

            else:

                p.append(num)

        return less + p + more