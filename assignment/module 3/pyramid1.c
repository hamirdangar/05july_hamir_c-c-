#include<stdio.h>
int main()
{
    int i,k,j;
    for(i=1;i<=5;i++)
    {
        for(k=1;k<=i;k++)
        {
            printf(" ");
        }
        for(j=5;j>i;j--)
        {
            printf("*");
            
        }
        printf("\n");
    }
    return 0;
}
