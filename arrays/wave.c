#include<stdio.h>
int main()
{
    int i,j,size,flag=0;
    printf("Enter the size:");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array elements:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size-1;i++)
    {
        flag=0;
        if(i%2==0)
        {
            if(arr[i]>arr[i+1])
            {
                flag=0;
            }
            else
            {
                flag=1;
                break;
            }
            
        }
        else 
        {
            if(arr[i]<arr[i+1])
            {
                flag=0;
            }
            else
            {
                flag=1;
                break;
            }
        }
    }
    if(flag==0)
    {
        printf("wave.");
    }
    else{
        printf("not a wave");
    }
}