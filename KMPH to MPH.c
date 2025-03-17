#include<stdio.h>

#define KTM 0.621371

int main()
{   
    int a,b;

    printf("KMPH Value = ");
    scanf("%d",&a);

    b=a*KTM;

    printf("The converted Value of KMPH to MPH is %d",b);

    return 0;

}