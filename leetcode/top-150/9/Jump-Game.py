class Solution(object):
    def canJump(self, nums):
        l = 0
        finish = False
        for index, fuel in enumerate(nums):
            l = max(l, fuel)
            l -= 1
            if index == len(nums) - 1:
                finish = True

            if l < 0:
                break
        return finish


Solution.canJump(1, [0])
