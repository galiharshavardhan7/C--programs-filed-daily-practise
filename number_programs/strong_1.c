#include<stdio.h>
int main()
{
    int num,sum=0,temp=0,digits=0,count=0,fact=1,i;
    printf("Enter your number:");
    scanf("%d",&num);
    temp=num;
    
    while(temp>0)
    {
        digits=temp%10;
        temp=temp/10;
        for(i=1;i<=digits;i++)
        {
           fact=fact*i;
        }
        sum=sum+(fact);
        fact=1;
    }
    if(sum==num)
    {
        printf("%d is a strong number",num);
    }
    else
    {
        printf("%d is not a strong number",num);
    }
}