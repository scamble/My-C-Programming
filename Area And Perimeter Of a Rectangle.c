#include<stdio.h>
int main()
{
    int c,b,p,a;

    printf("Enter the length of the Rectangle : ");
    scanf("%d",&c);

    printf("Enter the width of the Rectangle : ");
    scanf("%d",&b);

    p=c*b;
    a=2*(c+b);

    printf("The Perimeter of the Rectangle is %d\n",p);
    printf("The Area of the Rectangle is %d",a);

    return 0;
}