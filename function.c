#include <stdio.h>

int maxOfThree(int a, int b, int c) {
    if (a >= b && a >= c) {
        return a;
    } else if (b >= a && b >= c) {
        return b;
    } else {
        return c;
    }
}

int main() {
    int num1, num2, num3, max;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    max = maxOfThree(num1, num2, num3);

    printf("The maximum of the three numbers is: %d\n", max);

    return 0;
}