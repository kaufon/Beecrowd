class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        for index in range(len(nums)-1):
            for j in range(index+1, len(nums)):
                if nums[index] + nums[j] == target:
                    return ([index, j])


Solution.twoSum(1, [5, 5], 10)
