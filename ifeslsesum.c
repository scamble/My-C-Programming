#include <stdio.h>

int main() {
    int num1, num2, max;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Find the maximum using if-else
    if (num1 > num2) {
        max = num1;
    } else {
        max = num2;
    }

    // Output the maximum number
    printf("The maximum of the two numbers is: %d\n", max);

    return 0;
}