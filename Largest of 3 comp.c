#include<stdio.h>
int main()
{
    int a,b,c;

    printf("Enter any three numbers: ");
    scanf("%d%d%d",&a,&b,&c);

    if((a==b && (a>c && b>c)))
    {
        printf("%d and %d are equal and is the largest among the given three numbers",a,b);
    }
    else if((a==b && (a<c && b<c)))
    {
        printf("%d and %d are equal and %d is the largest among the given three numbers",a,b,c);
    }
    else if((a==c && (a>b && c>b)))
    {
        printf("%d and %d are equal and is the largest among the given three numbers",a,c);
    }
    else if((a==c && (a<b && c<b)))
    {
        printf("%d and %d are equal and %d is the largest among the given three numbers",a,c,b);
    }
    else if((b==c && (b>a && c>a)))
    {
        printf("%d and %d are equal and is the largest among the given three numbers",b,c);
    }
    else if((b==c && (b<a && c<a)))
    {
        printf("%d and %d are equal and %d is the largest among the given three numbers",b,c,a);
    }
    else if(a==b && b==c)
    {
        printf("%d,%d,and %d are all equal and the largest",a,b,c);
    }
    else
    {
        if(a>b)
        {
            if(a>c)
            {
                printf("%d is the largest number",a);
            }
            else
            {
                printf("%d is the largest number",c);
            }
        }
        else
        {
            if(b>c)
            {
                printf("%d is the largest number",b);
            }
            else
            {
                printf("%d is the largest number",c);
            }
        }
    }

    return 0;
}