class Solution:
    def maxArea(self, heights: list[int]) -> int:
        maxSum = 0
        l, r = 0, len(heights)-1
        while l < r:
            area = min(heights[l], heights[r]) * (r-l)
            maxSum = max(area, maxSum)
            if heights[l] <= heights[r]:
                l += 1
            else:
                r -= 1
        print(maxSum)


Solution.maxArea(1, [1, 7, 2, 5, 12, 3, 500, 500, 7, 8, 4, 7, 3, 6])
