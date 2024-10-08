from typing import List

class Solution:
    def boundarySum(self, n: int, matrix: List[List[int]]) -> List[int]:
        result = []

        for level in range((n + 1) // 2):
            level_sum = 0

            for i in range(level, n - level):
                level_sum += matrix[level][i]

            for i in range(level + 1, n - level):
                level_sum += matrix[i][n - level - 1]

            if n - level - 1 > level:
                for i in range(n - level - 2, level - 1, -1):
                    level_sum += matrix[n - level - 1][i]

            if n - level - 1 > level:
                for i in range(n - level - 2, level, -1):
                    level_sum += matrix[i][level]

            result.append(level_sum)

        return result
