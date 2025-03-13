class Solution:
    def findMedianSortedArrays(self, nums1: list[int], nums2: list[int]) -> float:
        merged_array = nums1 + nums2
        n = len(merged_array) - 1
        merged_array.sort()
        if len(merged_array) % 2 == 0:
            return((merged_array[n // 2 + 1] + merged_array[(n//2)]) / 2)
        else:
            return(merged_array[n//2])


Solution.findMedianSortedArrays(1, [1, 2], [3, 4])
