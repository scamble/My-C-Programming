#include <stdio.h>

int determinant(int a[10][10], int n) {
    int det = 0, submatrix[10][10], i, j, x, y;
    
    // Base case for 1x1 matrix
    if (n == 1) {
        return a[0][0];
    }
    
    // Base case for 2x2 matrix
    if (n == 2) {
        return (a[0][0] * a[1][1]) - (a[0][1] * a[1][0]);
    }
    
    // Recursive case for n > 2
    for (x = 0; x < n; x++) {
        // Create submatrix
        for (i = 1; i < n; i++) {
            y = 0;
            for (j = 0; j < n; j++) {
                if (j == x) continue; // Skip the current column
                submatrix[i - 1][y] = a[i][j];
                y++;
            }
        }
        // Calculate determinant using cofactor expansion
        det += (x % 2 == 0 ? 1 : -1) * a[0][x] * determinant(submatrix, n - 1);
    }
    return det;
}

int main() {
    int n, i, j;
    printf("Enter the size of the square matrix (max 10): ");
    scanf("%d", &n);
    
    // Check for valid size
    if (n < 1 || n > 10) {
        printf("Invalid matrix size. Please enter a size between 1 and 10.\n");
        return 1; // Exit with error code
    }
    
    int a[10][10]; // Assuming maximum size is 10x10
    
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    int det = determinant(a, n);
    printf("Determinant of the matrix: %d\n", det);
    return 0;
}