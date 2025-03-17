#include <stdio.h>

int main() {
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n], even[n], odd[n], e_count = 0, o_count = 0;
    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            even[e_count++] = arr[i];
        } else {
            odd[o_count++] = arr[i];
        }
    }
    printf("Even elements:\n");
    for(i = 0; i < e_count; i++) {
        printf("%d ", even[i]);
    }
    printf("\nOdd elements:\n");
    for(i = 0; i < o_count; i++) {
        printf("%d ", odd[i]);
    }
    printf("\n");
    return 0;
}