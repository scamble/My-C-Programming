#include <stdio.h>

int main() {
    int n, i, j, forward_diag_sum = 0, backward_diag_sum = 0;
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
        forward_diag_sum += a[i][i];
        backward_diag_sum += a[i][n - 1 - i];
    }
    
    if(forward_diag_sum == backward_diag_sum) {
        printf("The forward diagonal is equal to the backward diagonal.\n");
    } else {
        printf("The forward diagonal is not equal to the backward diagonal.\n");
    }
    
    return 0;
}