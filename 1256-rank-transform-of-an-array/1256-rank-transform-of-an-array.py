class Solution:
    def arrayRankTransform(self, arr: List[int]) -> List[int]:
        
        hash_dict = {}

        nums = sorted(set(arr))

        rank = 1

        for num in nums:
            hash_dict[num] =rank

            rank += 1

        
        for i in range(len(arr)):
            arr[i] = hash_dict[arr[i]]


        return arr