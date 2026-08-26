#include<stdio.h>
int main()
{
    int temp=0,j,i,size;
    printf("Enter the size:");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array elements:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    temp=arr[0];
    for(i=0;i<size;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[size-1]=temp;
    printf("After anticlockwise shift:");
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}