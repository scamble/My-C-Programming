#include <stdio.h>

int main() {
    int n = 3;

    // Upper part of the pattern
    for (int i = 1; i < n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    // Lower part of the pattern
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}