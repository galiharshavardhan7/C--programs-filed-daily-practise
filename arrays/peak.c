#include<stdio.h>
int main()
{
    int n,i,j,size;
    printf("Enter the array size :");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array elements: ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    
        if(arr[0]>=arr[1])
        {
            printf("%d",arr[0]);
        }
        for(j=1;j<size-1;j++)
        {
            if((arr[j]>=arr[j+1])&&(arr[j]>=arr[j-1]))
            {
                printf("%d ",arr[j]);
            }
        }
        if(arr[size-1]>=arr[size-2])
        {
            printf("%d",arr[size-1]);
        }
    
    
}