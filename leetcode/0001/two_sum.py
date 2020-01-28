class Solution:
    def two_sum(self, nums: List[int], target: int) -> List[int]:
        dct = {}
        for i, num in enumerate(nums):
            diff = target - num
            if diff in dct:
                return [dct[diff], i]
            dct[num] = i
