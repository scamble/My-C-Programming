#include <stdio.h>

int myStrlen(const char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

void myStrcpy(char *dest, const char *src) {
    while ((*dest++ = *src++));
}

int myStrcmp(const char *str1, const char *str2) {
    while (*str1 && (*str1 == *str2)) {
        str1++;
        str2++;
    }
    return *(unsigned char *)str1 - *(unsigned char *)str2;
}

void myStrcat(char *dest, const char *src) {
    while (*dest) {
        dest++;
    }
    while ((*dest++ = *src++));
}

void myStrrev(char *str) {
    int len = myStrlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int main() {
    char str1[100], str2[100];
    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline character from fgets
    str1[myStrlen(str1) - 1] = '\0';
    str2[myStrlen(str2) - 1] = '\0';

    printf("Length of first string: %d\n", myStrlen(str1));
    printf("Length of second string: %d\n", myStrlen(str2));

    char copy[100];
    myStrcpy(copy, str1);
    printf("Copied string: %s\n", copy);

    printf("Comparison result: %d\n", myStrcmp(str1, str2));

    myStrcat(str1, str2);
    printf("Concatenated string: %s\n", str1);

    myStrrev(str1);
    printf("Reversed string: %s\n", str1);

    return 0;
}