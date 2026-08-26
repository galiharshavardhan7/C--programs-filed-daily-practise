#include<stdio.h>
int main()
{
    int n,i,j,size,temp,flag=1;
    printf("Enter the array size :");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array elements: ");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size/2;i++)
    {
        if(arr[i]!=arr[size-1-i])
        {
            flag=0;
            break;
        }
        
    }
    if(flag==1)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not palindrome")
    }
}