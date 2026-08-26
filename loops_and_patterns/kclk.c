#include<stdio.h>
int main()
{
    int temp=0,k,m,i,size;
    printf("Enter the size:");
    scanf("%d",&size);
    int arr[size];
    printf("Enter k ");
    scanf("%d",&k);
    printf("Enter the array elements:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(m=0;m<k;m++)
    {
        temp=arr[size-1];
        for(i=size-1;i>0;i--)
        {
            arr[i]=arr[i-1];
        }
        arr[0]=temp;
    }
    printf("After clockwise shift:");
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}