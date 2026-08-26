#include<stdio.h>
int main()
{
    int num,i,sum=0;
    printf("Enter the range n:");
    scanf("%d",&num);
    for(i=0;i<=num;i++)
    {
        sum=sum+i;
    }
    printf("Sum=%d",sum);
}