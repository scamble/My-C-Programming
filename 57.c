#include <stdio.h>

void appendStrings(char str1[], char str2[]) {
    int i = 0, j = 0;

    // Move to the end of str1
    while (str1[i] != '\0') {
        i++;
    }

    // Append str2 to str1
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0'; // Null-terminate the concatenated string
}

int main() {
    char str1[100], str2[100];
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    
    appendStrings(str1, str2);
    printf("Concatenated string: %s", str1);
    return 0;
}