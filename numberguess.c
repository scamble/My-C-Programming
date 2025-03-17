#include <stdio.h>

int main() {
    int secretNumber = 25;
    int guess, attempts = 0;

    do {
        printf("Guess the secret number (between 20 and 30): ");
        scanf("%d", &guess);
        attempts++;
        
        if (guess < secretNumber) {
            printf("Too low! Try again.\n");
        } else if (guess > secretNumber) {
            printf("Too high! Try again.\n");
        }
    } while (guess != secretNumber);

    printf("Congratulations! You've guessed the secret number %d in %d attempts.\n", secretNumber, attempts);
    return 0;
}