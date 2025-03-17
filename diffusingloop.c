#include <stdio.h> 
 int main() { 
    int a, b, difference; 
    printf("Enter two numbers: "); 
    scanf("%d %d", &a, &b); 
    difference = a > b ? a - b : b - a; 
    while (difference > 0) { 
        printf("The difference is: %d\n", difference);         
        break;  
    } 
    return 0; 
} 
