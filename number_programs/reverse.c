#include<stdio.h>
int main()
{
    int num,rev,temp=0,digits=0;
    printf("Enter your number:");
    scanf("%d",&num);
    temp=num;
    while(temp>0)
    {
        digits=temp%10;
        temp=temp/10;
        rev=rev*10+digits;
    }
    printf("reverse=%d\n",rev);
}