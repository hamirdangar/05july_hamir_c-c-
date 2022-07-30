#include<stdio.h>
int main()
{
    int i,j,n=19/2;
    char string[20];
    printf("enter the any kay");
    scanf("%s",&string);
    for(i=1;i<10;i++)
    {
        for(j=1;j<=19;j++)
        {
            // if((i==1&&j>1&&j<5) || (j==1&&i>1) || (j==5&&i>1) || i==4&&i>1)
            if(j==n || j==(19-n) || (i==10/2 && j>n && j<(19-n)))
            {
                printf("%s",string);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
        n--;
        
    }
    return 0;
}