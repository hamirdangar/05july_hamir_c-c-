#include<stdio.h>
#define N 5
int main()
{
    int a[N],i,key,count=0;
    printf("enter the number");
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the number to be shrch");
    scanf("%d",&key);
    printf("\n");

    for(i=0;i<N;i++)
    {
        if(a[i]==key)
        {
            printf("%dposition is %d\n",key,i+1);
            count++;
        }
    }
    // printf("%d repead of %d tims",key,count);
    printf("\n");
}
