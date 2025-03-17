#include <stdio.h>

int main() {
    int n;
    printf("Enter number of names: ");
    scanf("%d", &n);
    char names[n][100]; // Assuming max name length is 99 characters

    for (int i = 0; i < n; i++) {
        printf("Enter name %d: ", i + 1);
        scanf("%s", names[i]);
    }

    printf("Names entered:\n");
    for (int i = 0; i < n; i++) {
        printf("%s\n", names[i]);
    }
    return 0;
}