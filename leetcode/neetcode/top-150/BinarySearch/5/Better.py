class Solution:
    def search(self, nums: list[int], target: int) -> int:
        left, right = 0, len(nums)-1
        while left < right:
            mid = (left + right) // 2
            if nums[mid] == target:
                return (mid)
            if nums[left] <= nums[mid]:
                if nums[mid] < target or target < nums[left]:
                    left = mid + 1
                else:
                    right = mid - 1
            else:
                if nums[mid] > target or target > nums[right]:
                    right = mid - 1
                else:
                    left = mid + 1
        return (-1)


Solution.search(1, [4, 5, 0, 1, 2], 5)
