class Solution:
    def findMin(self, nums: list[int]) -> int:
        low, high = 0, len(nums) - 1
        while low < high:
            mid = (high + low) // 2
            if nums[mid] >= nums[high]:
                low = mid + 1
            else:
                high = mid
        return (nums[low])


Solution.findMin(1, [6, 7, 0, 1, 3, 4, 5])
