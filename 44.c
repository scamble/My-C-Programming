#include <stdio.h>

int main() {
    int r, c, i, j;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);
    int a[r][c], transpose[c][r];
    
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            transpose[j][i] = a[i][j];
        }
    }
    
    printf("Transpose of the matrix:\n");
    for(i = 0; i < c; i++) {
        for(j = 0; j < r; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}