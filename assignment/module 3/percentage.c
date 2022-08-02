#include<stdio.h>
int main()
{
    int phy, chem, bio, math, comp, mark;
    float per;
    
    printf("enter tha five sbj marks:");
    scanf("%d%d%d%d%d",&phy,&chem,&bio,&math,&comp);
   
    per=(phy+chem+bio+math+comp)/5;
    printf("percentage =%f\n",per);

    if(per >=75)
    {
        printf("first class");
    }
    else if(per >=60)
    {
        printf("second class");
    }
    else if(per >=50)
    {
        printf("pass class");
    }
    else
    {
        printf("fail");
    }
    return 0;
}