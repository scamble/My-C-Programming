#include <stdio.h>

int main() {
    int r, c, i, j;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);
    int a[r][c], row_sum[r], col_sum[c];
    
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    for(i = 0; i < r; i++) {
        row_sum[i] = 0;
        for(j = 0; j < c; j++) {
            row_sum[i] += a[i][j];
        }
    }
    
    for(j = 0; j < c; j++) {
        col_sum[j] = 0;
        for(i = 0; i < r; i++) {
            col_sum[j] += a[i][j];
        }
    }
    
    printf("Sum of each row:\n");
    for(i = 0; i < r; i++) {
        printf("Row %d: %d\n", i + 1, row_sum[i]);
    }
    
    printf("Sum of each column:\n");
    for(j = 0; j < c; j++) {
        printf("Column %d: %d\n", j + 1, col_sum[j]);
    }
    
    return 0;
}