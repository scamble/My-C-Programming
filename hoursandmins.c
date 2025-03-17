//Dhayan Muhammed S
#include<stdio.h>
int main()
{
    int minutes,hours;
    float mins;
    printf("Enter the time in minutes : ");
    scanf("%d",&minutes);
    hours = minutes/60;
    mins = minutes%60;
    printf("The hours and minutes are %d:%f",hours,mins);
    return 0;
}