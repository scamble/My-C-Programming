#include<stdio.h>
int main()
{
    int num1,num2,temp;
    printf("Enter the numbers you want to Interchange : ");
    scanf("%d %d",&num1,&num2);
    num1 = num1+num2;
    num2 = num1-num2;
    num1 = num1-num2;
    printf("The Interchanged values of the given data are : %d\t %d",num1,num2);
    return 0;   
}