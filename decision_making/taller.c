#include<stdio.h>
int main()
{
    int temp,i,j,size,sum=0,last;
    printf("Enter the array size :");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array elements: ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size-1;i++)
    {
        if(arr[i]<arr[i+1])
        {
            arr[i]=arr[i+1];
        }
        
        else{
            arr[i]=-1;
        }
        arr[size-1]=-1;
    }
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }

}