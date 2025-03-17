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

    if(a==b)
    {
        printf("You Win\n");
    }
    else if(a<b)
    {
        printf("You Lose\n");
    }
    else
    {
        printf("You Lose");
    }
    return 0;
}