#include <stdio.h>

int main() {
    int numbers[3], max;

    printf("Enter three numbers: ");
    for (int i = 0; i < 3; i++) {
        scanf("%d", &numbers[i]);
    }

    max = numbers[0];

    for (int i = 1; i < 3; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }

    printf("The maximum of the three numbers is: %d\n", max);

    return 0;
}