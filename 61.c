#include <stdio.h>

void forward(int n) {
    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");
}

void backward(int n) {
    for (int i = n; i >= 1; i--) {
        printf("%d ", i);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter a positive number: ");
    scanf("%d", &n);
    forward(n);
    backward(n);
    return 0;
}