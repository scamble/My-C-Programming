#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int a,b;
    printf("Enter A Number : ");
    scanf("%d",&a);

    srand(time(NULL));
    int random=(rand()%10)+1;

    b=random;

    while(a<b)
    {
        printf("You Lose\n");
        a++;
    }
    return 0;
}