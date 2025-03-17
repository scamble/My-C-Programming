#include<stdio.h>
int rec(int a)
{
    if(a==0)
    {
        return 0:
    }
    else
    {
        return a + rec(a-1);
    }
}
int main()
{
    int number;
    printf("Enter the Value for the number n :");
    scanf("%d",&number);
    rec(number);
    return 0;
}