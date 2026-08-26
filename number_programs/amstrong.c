#include<stdio.h>
int main()
{
    int num,sum=0,temp=0,digits=0;
    printf("Enter your number:");
    scanf("%d",&num);
    temp=num;
    while(temp>0)
    {
        digits=temp%10;
        temp=temp/10;
        sum=sum+(digits*digits*digits);
    }
    
    if(sum==num)
    {
        printf("%d is an amstrong number",num);
    }
    else
    {
        printf("%d is not an amstrong number",num);
    }
}