#include<stdio.h>
int main()
{   
    int f,c;

    printf("Enter the Centigrade Value : ");
    scanf("%d",&f);

    c=(f-32)*5/9;

    printf("The Centigrade Value of %d is %d",f,c);

    return 0;
}