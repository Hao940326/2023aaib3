int diagonalSum(int** mat, int matSize, int* matColSize) {
    int ans = 0;
    for (int i = 0; i < matSize; i++) {
        ans += mat[i][i];                     // Sum of the primary diagonal
        ans += mat[i][matSize - 1 - i];      // Sum of the secondary diagonal
    }
    
    // If matSize is odd, subtract the middle element once, as it's counted twice
    if (matSize % 2 == 1) {
        ans -= mat[matSize / 2][matSize / 2];
    }

    return ans;  // Return the total diagonal sum
}
