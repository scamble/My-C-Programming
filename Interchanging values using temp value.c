#include<stdio.h>
int main()
{
    int a,b,t;

    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);

    t=a;
    a=b;
    b=t;

    printf("The interchanged values are %d and %d",a,b);

    return 0;
}