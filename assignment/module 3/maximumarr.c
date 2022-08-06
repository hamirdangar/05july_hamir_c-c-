#include<stdio.h>
int main()
{
    int i,arr[100],max,size;
    printf("enter size of array");
    scanf("%d",&size);
    
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    // max=arr[0];
    for(i=0;i<size;i++)
    {
        if(arr[i]>arr[0])
        {
            arr[0]=arr[i];
        }
    }
    printf("mahimum value of arr %d",arr[0]);
    return 0;
}