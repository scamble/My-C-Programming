#include<stdio.h>
int main()
{
    float p,r,t,s,a,b,c;

    printf("Enter the Principal amount : ");
    scanf("%f",&p);
    printf("Enter the Rate (in %%) : ");
    scanf("%f",&r);
    printf("Enter the Time Period in years : ");
    scanf("%f",&t);

    s=(p*t*r)/100;

    printf("The Simple Intrest Value is : %.2f",s);

    return 0;
}