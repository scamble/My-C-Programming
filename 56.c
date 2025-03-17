#include <stdio.h>

void findAndReplace(char str[], char oldChar, char newChar) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == oldChar) {
            str[i] = newChar;
        }
    }
}

int main() {
    char str[100], oldChar, newChar;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter character to find: ");
    scanf(" %c", &oldChar);
    printf("Enter character to replace with: ");
    scanf(" %c", &newChar);
    
    findAndReplace(str, oldChar, newChar);
    printf("Modified string: %s", str);
    return 0;
}