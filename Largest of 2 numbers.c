#include<stdio.h>
int main()
{
    int a,b;

    printf("Enter the first number :");
    scanf("%d",&a);
    printf("Enter the second number :");
    scanf("%d",&b);

    if(a>b)
    {
        printf("The Number %d is larger than the second number %d",a,b);
    }
    else
    {
        printf("The Number %d is larger than the first number %d",b,a);
    }
    return 0;
}