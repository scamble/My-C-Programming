#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int a, b,;

    srand(time(NULL));
    int random= (rand() % 10) + 1;

    b= random;

    while (1)
    {
        printf("Enter A number Between 1 to 10: ");
        scanf("%d", &a);

        a++;

        if (a < b)
        {
            printf("You Lose!! Try again.\n");
        }
        else if(a > b)
        {
            printf("Enter a Number Between 1 to 10 and try again\n");
        }
        else
        {
            printf(" Congratulations! You found the Random number %d ",random);
        }
    }

    return 0;
}