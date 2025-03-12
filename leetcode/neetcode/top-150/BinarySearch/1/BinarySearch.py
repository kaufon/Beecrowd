class Solution:
    def search(self, nums: list[int], target: int) -> int:
        low, mid, high = 0, 0, len(nums)-1
        while low <= high:
            mid = (low+high) // 2
            if nums[mid] < target:
                low = mid + 1
            elif nums[mid] > target:
                high = mid - 1
            else:
                return mid
        return False


Solution.search(1, [-1, 0, 2, 4, 6, 8], 4)
