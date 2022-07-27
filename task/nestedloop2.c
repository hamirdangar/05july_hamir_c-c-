#include<stdio.h>
int main()
{
    int i,h,k;
    i=0;
    for(i=1;i<=5;i++)
    {
        for(h=5;h>i;h--)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("%d",k);
        }
        printf("\n");
    }
    return 0;
}