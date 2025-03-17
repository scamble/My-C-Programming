#include<stdio.h>
int main()
{   
    int c,f;

    printf("Enter the Centigrade Value : ");
    scanf("%d",&c);

    f=(c*9/5)+32;

    printf("The Fahrenheit Value of %d is %d",c,f);

    return 0;
}