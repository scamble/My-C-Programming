#include <stdio.h>

int main() {
    int num1, num2, max;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    max = (num1 > num2) ? num1 : num2;
    printf("The maximum of the two numbers is: %d\n", max);

    return 0;
}