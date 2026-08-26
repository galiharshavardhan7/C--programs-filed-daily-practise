#include<stdio.h>
int main()
{
    int num,sum=0,temp=0,digits=0,count=0,power=1,i;
    printf("Enter your number:");
    scanf("%d",&num);
    temp=num;
    while(temp>0)
    {
        temp=temp/10;
        count++;
    }
    temp=num;
    while(temp>0)
    {
        digits=temp%10;
        temp=temp/10;
        for(i=1;i<=count;i++)
        {
            power=power*digits;
        }
        sum=sum+(power);
        power=1;
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