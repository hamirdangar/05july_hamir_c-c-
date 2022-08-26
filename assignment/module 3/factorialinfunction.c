#include<stdio.h>

int factorial(int n);

int main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    printf("factorial of number is %d :",factorial(n));
    return 0;
}

int factorial(int n)
{
    if(n==0)
        return 1;
    int factnm1=factorial(n-1);
    int factn=factnm1*n;
    return factn;
}


// #include<stdio.h>

// int fact();

// int main()
// {
//     printf("enter the number");
//     printf("factoriyl of number is %d",fact());
//     return 0;

// }

// int fact()
// {
//     int i,f=1,n;
//     scanf("%d",&n);
//     for(i=1;i<=n;i++)
//     {
//         f=f*i;
//     }
//     return f;
// }