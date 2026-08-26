#include<stdio.h>
int main()
{
    int num,temp,count=0;
    printf("Enter the number:");
    scanf("%d",&num);
    temp=num;
    while(temp>0)
    {
        temp=temp/10;
        count++;
    }
    printf("count=%d",count);
}