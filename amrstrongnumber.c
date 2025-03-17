#include <stdio.h> 
int main() { 
    int num, original, remainder, sum = 0;     
    printf("Enter a positive integer: "); 
    scanf("%d", &num);     original = num; 
    do { 
        remainder = num % 10; 
        sum += remainder * remainder * remainder;         
        num /= 10;     
        } 
    while (num != 0);     
    if (sum == original) 
    printf("%d is an Armstrong number.\n", original);     
    else 
    printf("%d is not an Armstrong number.\n", original);     
    return 0; 
} 
