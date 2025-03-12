class Solution:
    def searchMatrix(self, matrix: list[list[int]], target: int) -> bool:
        ROWS, COLS = len(matrix), len(matrix[0])
        top, bot = 0, ROWS-1
        while top <= bot:
            row = (top+bot) // 2
            if matrix[row][0] > target:
                bot = row - 1
            elif matrix[row][0] < target and matrix[row][-1] < target:
                top = row + 1
            else:
                right_row = matrix[row]
                low,  high = 0, COLS-1
                while low <= high:
                    mid = (high+low) // 2
                    if right_row[mid] < target:
                        low = mid+1
                    elif right_row[mid] > target:
                        high = mid-1
                    else:
                        return True
                return False
        return False


Solution.searchMatrix(
    1, [[1, 3, 5, 7], [10, 11, 16, 20], [23, 30, 34, 60]], 13)
