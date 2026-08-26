#include<stdio.h>
int main()
{
    int i,j,size,index=0,k,max,sum=0;
    printf("Enter the array size :");
    scanf("%d",&size);
    printf("Enter the subarray size:");
    scanf("%d",&k);
    int arr[size];
    printf("Enter the array elements: ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<k;i++)
    {
        sum=sum+arr[i];
        max=sum;
        index=i;
    }
    for(i=1;i<=size-k;i++)
    {
        sum=sum-arr[i-1]+arr[i+k-1];
        if(max<sum)
        {
            max=sum;
            index=i;
        }
    }
    printf("The max sum of subarray is %d\n",max);

    for(i=index;i<(index+k);i++)
    {
        printf("%d ",arr[i]);
    }
    
}