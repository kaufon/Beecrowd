class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        indices = {}
        for i, n in enumerate(nums):
            indices[n] = i
        for i, n in enumerate(nums):
            diff = target - n
            if diff in nums and indices[diff] != i:
                return ([i, indices[diff]])


Solution.twoSum(1, [1, 3, 4, 2], 6)
