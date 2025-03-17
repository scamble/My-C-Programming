#include<stdio.h>
int main()
{
    int a,b,c;

    printf("Enter any Number: ");
    scanf("%d",&a);

    b=2;
    if(a%b==0)
    {
        printf("The Given Number is odd");
    }
    else
    {
        printf("The Given Number is even");
    }
    return 0;
}