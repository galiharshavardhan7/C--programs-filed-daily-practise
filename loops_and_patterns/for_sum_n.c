#include<stdio.h>
int main()
{
    int n,sum,count;
    printf("Enter n:");
    scanf("%d",&n);
    for(sum=0,count=1;count<=n;count++)
    {
        sum=sum+count;
    }
    printf("SUM=%d",sum);
}