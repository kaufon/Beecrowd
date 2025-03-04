class Solution(object):
    def rotate(self, nums, k):
        k = k % len(nums)
        nums.reverse()
        l, r = 0, k - 1
        while l < r:
            nums[l], nums[r] = nums[r], nums[l]
            l, r = l+1, r-1

        l, r = k, len(nums) - 1
        while l < r:
            nums[l], nums[r] = nums[r], nums[l]
            l, r = l+1, r-1


Solution.rotate(0, [1, 2, 3, 4, 5, 6, 7], 2)
