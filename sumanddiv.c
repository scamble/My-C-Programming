#include <stdio.h>

int main() {
    int n;
    double sum = 0.0, factorial = 1.0;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        factorial *= i;
        sum += (double)i / factorial;
    }
    printf("The sum is: %lf\n", sum);
    return 0;
}