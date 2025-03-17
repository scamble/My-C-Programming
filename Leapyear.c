#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year you want to check : ");
    scanf("%d",&year);
    if(year%4==0)
    {
        printf("The Given year is a leap year");
    }
    else
    {
        printf("The Given Year is not a leap year");
    }
    return 0;
}