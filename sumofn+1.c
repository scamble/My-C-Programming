#include <stdio.h> int main() {     int n; 
    printf("Enter a positive integer: ");     scanf("%d", &n); 
    printf("From 1 to %d:\n", n);     for (int i = 1; i <= n; i++) {         printf("%d ", i); 
    } 
    printf("\n"); 
    printf("From %d to 1:\n", n);     for (int i = n; i >= 1; i--) {         printf("%d ", i); 
    } 
    printf("\n"); 
 
    return 0; 
} 
