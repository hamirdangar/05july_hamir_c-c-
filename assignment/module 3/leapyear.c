#include<stdio.h>
int main()
{
    int year;
    printf("enter the year");
    scanf("%d",&year);

    if(year % 400 == 0)
        {
            printf("%d is a leap year");
        }
        else if(year % 100 == 0)
        {
            printf("%d is a not leap year");
        }
        else if(year % 4 == 0)
        {
            printf("%d is a leap yaea");
        }
    else
        {
            printf("%d is not leap year");
        }    
    return 0;
        
}