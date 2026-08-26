#include<stdio.h>
int main()
{
    int n,i,j,size,sum_left=0,sum_r=0;
    printf("Enter the array size :");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array elements: ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
    {
        sum_left=0;
        sum_r=0;
        for(j=0;j<i;j++)
        {
            sum_left=sum_left+arr[j];
        }
        for(j=i+1;j<size;j++)
        {
            sum_r=sum_r+arr[j];
        }
        
        if(sum_left==sum_r)
        {
            printf("%d",i);
            return 0;
        }
    }
    
}