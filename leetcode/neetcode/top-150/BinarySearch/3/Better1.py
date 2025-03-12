from math import ceil


class Solution:
    def minEatingSpeed(self, piles: list[int], h: int) -> int:
        ans = max(piles)
        low, high = 1, max(piles)
        while low <= high:
            k = (low+high) // 2
            totalHours = 0
            for pile in piles:
                totalHours += ceil(pile/k)
            if totalHours > h:
                low = k + 1
            elif totalHours <= h:
                ans = k
                high = k - 1
        return(ans)


Solution.minEatingSpeed(1, [1, 4, 3, 2], )
