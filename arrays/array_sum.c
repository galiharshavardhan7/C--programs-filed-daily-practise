#include<stdio.h>
int main()
{
    int i,j,size,sum=0;
    printf("Enter the size\n");
    scanf("%d",&size);
    int num[size];
    printf("Enter the numbers\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&num[i]);
        sum=sum+num[i];
    }
    
    printf("Sum=%d:",sum);
}