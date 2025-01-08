from typing import List

class Solution:
    def spiralOrder(self, matrix: List[List[int]]) -> List[int]:
        M, N = len(matrix), len(matrix[0])  # Dimensions of the matrix
        i, j = 0, 0  # Start position (top-left corner)
        di = [0, 1, 0, -1]  # Direction for row (right, down, left, up)
        dj = [1, 0, -1, 0]  # Direction for column (right, down, left, up)
        d = 0  # Starting direction (right)
        ans = []

        while len(ans) < M * N:
            ans.append(matrix[i][j])
            matrix[i][j] = 999  # Mark the cell as visited (or use any other marker)
            
            # Compute next position
            i2, j2 = i + di[d], j + dj[d]
            
            # Check if the next position is out of bounds or already visited
            if i2 < 0 or i2 >= M or j2 < 0 or j2 >= N or matrix[i2][j2] == 999:
                # Change direction (right -> down -> left -> up)
                d = (d + 1) % 4
                i2, j2 = i + di[d], j + dj[d]
            
            # Update to the new position
            i, j = i2, j2
        
        return ans
