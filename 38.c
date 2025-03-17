#include <stdio.h>

int main() {
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Odd positioned elements:\n");
    for(i = 0; i < n; i += 2) {
        printf("%d ", arr[i]);
    }
    printf("\nEven positioned elements:\n");
    for(i = 1; i < n; i += 2) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}