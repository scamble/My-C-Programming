#include<stdio.h>
void forward(int n)
{
    if(n>0)
    {
        forward(n-1);
        printf("%d\t",n);
    }
}
void backward(int n)
{
    if(n>0)
    {
        printf("%d\t",n);
        backward(n-1);
    }
}
int main()
{
    int a;
    printf("Enter the Value for n : ");
    scanf("%d",&a);
    printf("The numbers from 1 to %d are :",a);
    forward(a);
    printf("\n");
    printf("The numbers from %d to 1 are :",a);
    backward(a);
    printf("\n");
    return 0;
}