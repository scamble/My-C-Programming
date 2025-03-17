#include<stdio.h>
#include<math.h>

int main()
{
    int r,p,a;

    printf("Enter the Radius of The circle:");
    scanf("%d",&r);

    p = 2*M_PI*r;
    a = M_PI*r*r;

    printf("The Perimeter of The circle is %d\n",p);
    printf("The Area of the circle is %d",a);

    return 0;   
}