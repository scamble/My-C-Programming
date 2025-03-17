#include <stdio.h>

int main() {
    int num1, num2, result, choice;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    printf("Menu:\n");
    printf("1. Bitwise AND\n");
    printf("2. Bitwise OR\n");
    printf("3. Bitwise XOR\n");
    printf("4. Bitwise NOT (first number)\n");
    printf("5. Bitwise NOT (second number)\n");
    printf("6. Left Shift (first number)\n");
    printf("7. Right Shift (first number)\n");
    printf("8. Left Shift (second number)\n");
    printf("9. Right Shift (second number)\n");
    printf("Enter your choice (1-9): ");
    scanf("%d", &choice);
    switch (choice) {
        case 1:
            result = num1 & num2;
            printf("Result of %d AND %d = %d\n", num1, num2, result);
            break;
        case 2:
            result = num1 | num2;
            printf("Result of %d OR %d = %d\n", num1, num2, result);
            break;
        case 3:
            result = num1 ^ num2;
            printf("Result of %d XOR %d = %d\n", num1, num2, result);
            break;
        case 4:
            result = ~num1;
            printf("Result of NOT %d = %d\n", num1, result);
            break;
        case 5:
            result = ~num2;
            printf("Result of NOT %d = %d\n", num2, result);
            break;
        case 6:
            result = num1 << 1;
            printf("Result of %d left shift = %d\n", num1, result);
            break;
        case 7:
            result = num1 >> 1;
            printf("Result of %d right shift = %d\n", num1, result);
            break;
        case 8:
            result = num2 << 1;
            printf("Result of %d left shift = %d\n", num2, result);
            break;
        case 9:
            result = num2 >> 1;
            printf("Result of %d right shift = %d\n", num2, result);
            break;
        default:
            printf("Invalid choice!\n");
    }
    return 0;
}