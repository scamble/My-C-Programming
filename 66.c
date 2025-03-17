#include <stdio.h>

int sumOfFirstN(int n) {
    if (n == 0) return 0;
    return n + sumOfFirstN(n - 1);
}

int main() {
    int n;
    printf("Enter a positive number: ");
    scanf("%d", &n);
    printf("Sum of first %d numbers is %d\n", n, sumOfFirstN(n));
    return 0;
#include <stdio.h>

int sumOfFirstN(int n) {
    if (n == 0) return 0;
    return n + sumOfFirstN(n - 1);
}

int main() {
    int n;
    printf("Enter a positive number: ");
    scanf("%d", &n);
    printf("Sum of first %d numbers is %d\n", n, sumOfFirstN(n));
    return 0;
}