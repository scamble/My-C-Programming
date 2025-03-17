#include<stdio.h>

#define FV 60

int main()
{
    int m,h,M;

    printf("Enter the minutes : ");
    scanf("%d",&m);

    h=m/FV;
    M=m%FV;

    printf("The total no of hours and minutes are %d h and %d m",h,M);

    return 0;
}