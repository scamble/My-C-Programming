#include <stdio.h>

int main() {
    char str[100];
    int length = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    while(str[length] != '\0') {
        length++;
    }
    
    // Adjust for the newline character
    if (str[length - 1] == '\n') {
        length--;
    }
    
    printf("Length of the string: %d\n", length);
    return 0;
}