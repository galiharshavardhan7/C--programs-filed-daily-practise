#include<stdio.h>
int main()
{
    int i,j,size,key;
    printf("Enter the size:");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the element to be removed  ");
    scanf("%d",&key);
    printf("Enter the array elements:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
    {
        if(arr[i]==key)
        {
            for(j=i;j<size-1;j++)
            {
                arr[j]=arr[j+1];
            }
            size--;
        }
    }
    printf("Final array");
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}