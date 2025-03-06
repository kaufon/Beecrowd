import collections
import heapq

# BUCKET SORT


class Solution:
    def topKFrequent(self, nums: list[int], k: int) -> list[int]:
        nums = sorted(nums)
        res = collections.Counter(nums)
        ans = heapq.nlargest(k, res.keys(), key=res.get)
        print(ans)


Solution.topKFrequent(1, [1, 2, 2, 3, 3], 2)
