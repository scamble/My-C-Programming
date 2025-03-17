#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                printf("i=%d,j=%d,k=%d\n",i,j,k);
            }
        }
    }
    return 0;
}