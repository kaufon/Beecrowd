class Solution:
    def hasDuplicate(self, nums: list[int]) -> bool:
        hash = set()
        for number in nums:
            if number in hash:
                return True
            hash.add(number)
        return False

Solution.hasDuplicate(1, [1, 2, 3, 4])
