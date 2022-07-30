#include<stdio.h>
int main()
{
    int i,j,nom=0;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
        {
            nom++;
            printf("%d ",nom);
        }
        printf("\n");
    }
    return 0;
}