class Solution:
    def search(self, nums: list[int], target: int) -> int:
        for i in range(len(nums)):
            if nums[i] == target:
                return i    
        return -1


Solution.search(1, [3, 4, 5, 6, 1, 2], 2)
