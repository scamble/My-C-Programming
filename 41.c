#include <stdio.h>

int main() {
    int n, i, first, second;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    first = second = -1; // Assuming all elements are non-negative
    for(i = 0; i < n; i++) {
        if(arr[i] > first) {
            second = first;
            first = arr[i];
        } else if(arr[i] > second && arr[i] < first) {
            second = arr[i];
        }
    }
    if(second == -1) {
        printf("There is no second largest element\n");
    } else {
        printf("Second largest element: %d\n", second);
    }
    return 0;
}