from math import ceil


class Solution:
    def minEatingSpeed(self, piles: list[int], h: int) -> int:
        speed = 1
        while True:
            totalTime = 0
            for pile in piles:
                totalTime += ceil(pile/speed)
            if totalTime <= h:
                return speed
            speed += 1
        return speed


Solution.minEatingSpeed(1, [25, 10, 23, 4], 4)
