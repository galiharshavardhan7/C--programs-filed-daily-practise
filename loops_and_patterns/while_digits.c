#include<stdio.h>
int main()
{
    int num,count;
    printf("Enter a Number:");
    scanf("%d",&num);
    while(num>0)
    {
        num=num/10;
        count++;
    }
    printf("Number of digits=%d",count);
    return 0;
}