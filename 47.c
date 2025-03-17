#include <stdio.h>

int main() {
    int n, i, j, is_same = 1;
    printf("Enter the size of the square matrix: ");
    scanf("%d", &n);
    int a[n][n];
    
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(i < j && a[i][j] != 0) {
                is_same = 0;
            }
            if(i > j && a[i][j] != 0) {
                is_same = 0;
            }
        }
    }
    
    if(is_same) {
        printf("The upper triangular matrix is the same as the lower triangular matrix.\n");
    } else {
        printf("The upper triangular matrix is not the same as the lower triangular matrix.\n");
    }
    
    return 0;
}