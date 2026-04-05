class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        for y in range(len(matrix)):
            for x in range(len(matrix[y])):
                if matrix[y][len(matrix[y])-1] >= target and matrix[y][x] <= target:
                    for new_x in range(len(matrix[y])):
                        if target == matrix[y][new_x]:
                            return True
                    return False
        return False