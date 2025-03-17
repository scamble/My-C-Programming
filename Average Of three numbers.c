#include<stdio.h>
int main()
{
    int a,b,c,sum,avg;

    printf("Enter three Numbers: ");
    scanf("%d%d%d",&a,&b,&c);

    sum=a+b+c;
    avg=sum/3;

    printf("Average Of Given three numbers : %d",avg);

    return 0;
}