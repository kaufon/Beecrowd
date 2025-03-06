class Solution:
    def longestConsecutive(self, nums: list[int]) -> int:
        s = set(nums)
        res = 0
        for num in s:
            if num - 1 not in s:
                next = num + 1
                length = 1
                while next in s:
                    length += 1
                    next += 1
                res = max(res, length)


Solution.longestConsecutive(1, [9, 1, 4, 7, 3, -1, 0, 5, 8, -1, 6])
