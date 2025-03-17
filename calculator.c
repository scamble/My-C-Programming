#include <stdio.h>

int main() {
    double num1, num2, result;
    char operator;
    double memory = 0;

    while (1) {
        printf("Enter first number (or 'm' to use memory): ");
        if (scanf(" %lf", &num1) != 1) {
            char memOption;
            scanf(" %c", &memOption);
            if (memOption == 'm') {
                num1 = memory;
                printf("Using memory value: %lf\n", num1);
            } else {
                printf("Invalid input. Exiting.\n");
                break;
            }
        }

        printf("Enter an operator (+, -, *, /, %): ");
        scanf(" %c", &operator);
        printf("Enter second number: ");
        scanf("%lf", &num2);

        switch (operator) {
            case '+':
                result = num1 + num2;
                printf("Result: %lf\n", result);
                break;
            case '-':
                result = num1 - num2;
                printf("Result: %lf\n", result);
                break;
            case '*':
                result = num1 * num2;
                printf("Result: %lf\n", result);
                break;
            case '/':
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Result: %lf\n", result);
                } else {
                    printf("Error: Division by zero.\n");
                }
                break;
            case '%':
                if ((int)num2 != 0) {
                    result = (int)num1 % (int)num2;
                    printf("Result: %lf\n", result);
                } else {
                    printf("Error: Division by zero.\n");
                }
                break;
            default:
                printf("Invalid operator.\n");
                continue; 
        }

       
        char memoryOption;
        printf("Options: (M)emory Save, (R)etrieve Memory, (A)dd to Memory, (C)lear Memory, (E)xit: ");
        scanf(" %c", &memoryOption);

        switch (memoryOption) {
            case 'M':
            case 'm':
                memory = result;
                printf("Result saved to memory.\n");
                break;
            case 'R':
            case 'r':
                printf("Memory value: %lf\n", memory);
                break;
            case 'A':
            case 'a':
                memory += result; 
                printf("Result added to memory. New memory value: %lf\n", memory);
                break;
            case 'C':
            case 'c':
                memory = 0;
                printf("Memory cleared.\n");
                break;
            case 'E':
            case 'e':
                printf("Exiting.\n");
                return 0;
            default:
                printf("Invalid option.\n");
        }
    }

    return 0;
}