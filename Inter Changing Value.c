#include <stdio.h>

int main()
{   int a,b,c;
    
    printf("Enter The First Number:");
    scanf("%d",&a);

    printf("Enter The Second Number:");
    scanf("%d",&b);

    a=a+b;
    b=a-b;
    c=a-b;

    printf("The Interchanged value of %d= ,%d=",a,b)
    
    return 0;
}