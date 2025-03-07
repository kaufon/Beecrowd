def recursiveBinarySearch(nums: list[int], target: int, high: int, low: int) -> int:
    if low <= high:
        middle = (low+high) // 2

        if nums[middle] == target:
            return middle
        elif target < nums[middle]:
            return recursiveBinarySearch(nums, target, middle-1, low)
        else:
            return recursiveBinarySearch(nums, target, high, middle+1)
    else:
        return -1


nums = [0, 1, 2, 3, 4, 5, 6, 7]
print(recursiveBinarySearch(nums, 6, len(nums)-1, 0))
