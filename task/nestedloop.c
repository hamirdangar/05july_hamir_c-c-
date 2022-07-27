#include<stdio.h>
int main()
{
    int i,h,s;
    i=1;
    for(i=1;i<=5;i++) 
    {
        for(h=5;h>i;h--)
        {
            printf(" ");
        }
        for(s=1;s<=i;s++)
        {
            printf("%d ",s);
        }
        printf("\n");
    }
    return 0;
}