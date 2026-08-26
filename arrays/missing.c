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
        sum=sum+arr[i];
    }
    temp=arr[0];
    last=arr[size-1];
    printf("%d",(last*(last+1)/2)-(temp*(temp-1)/2)-(sum));

}