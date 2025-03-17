#include <stdio.h>

int main() {
    int n;
    long long sum = 0, factorial = 1;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        factorial *= i;
        sum += factorial;
    }
    printf("The sum is: %lld\n", sum);
    return 0;
}