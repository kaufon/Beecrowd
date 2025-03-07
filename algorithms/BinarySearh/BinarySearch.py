class Solutions:
    def binarySearch(self, nums: list[int], target: int) -> int:
        low = 0
        mid = 0
        high = len(nums)-1
        while low <= high:
            mid = (high+low) // 2
            if nums[mid] < target:
                low = mid + 1
            elif nums[mid] > target:
                high = mid - 1
            else:
                print(mid)
                return
        print(-1)


Solutions.binarySearch(1, [0, 1, 2, 3, 4, 5, 6], 5)
