# Irei receber uma matriz e preciso criar uma nova com tamanho (n - 2) x (n - 2), com os maiores valores encontrados.
from typing import List

class Solution:
    def largestLocal(self, grid: List[List[int]]) -> List[List[int]]:
        n = len(grid)
        maxLocal = [[0] * (n - 2) for _ in range(n - 2)]
        
        for i in range(n - 2):
            for j in range(n - 2):
                max_value = 0
                # Percorre a submatriz 3x3
                for k in range(3):
                    for l in range(3):
                        max_value = max(max_value, grid[i + k][j + l])
                maxLocal[i][j] = max_value
        
        return maxLocal


app = Solution()
matrix = [[10, 29, 3], [32, 1, 2, 3], [1, 2, 109]]
print(app.largestLocal(matrix))
                