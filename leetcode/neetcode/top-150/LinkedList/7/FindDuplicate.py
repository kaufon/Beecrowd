class Solution:
    def findDuplicate(self, nums: list[int]) -> int:
        hash = set()
        for num in nums:
            if num in hash:
                return num
            hash.add(num)


Solution.findDuplicate(1, [1, 2, 3, 4, 5])
