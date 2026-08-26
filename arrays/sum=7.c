#include<stdio.h>
int main()
{
    int n,i,j,size,temp;
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
        for(j=i+1;j<size;j++)
        {
            if(arr[i]+arr[j]==size)
            {
                printf("(%d,%d)",arr[i],arr[j]);
            }
        }
    }
    
}