#include <stdio.h>

void displayBackward(int n) {
    if (n < 1) return;
    printf("%d ", n);
    displayBackward(n - 1);
}

int main() {
    int n;
    printf("Enter a positive number: ");
    scanf("%d", &n);
    displayBackward(n);
    printf("\n");
    return 0;
}