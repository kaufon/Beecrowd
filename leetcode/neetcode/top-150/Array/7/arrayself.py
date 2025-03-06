class Solution:
    def productExceptSelf(self, nums: list[int]) -> list[int]:
        n = len(nums)
        res = [0] * n
        for i, v in enumerate(nums):
            product = 1
            for index, number in enumerate(nums):
                if index == i:
                    continue
                product *= number
            res[i] = product
        return res


Solution.productExceptSelf(1, [-1,0,1,2,3])
