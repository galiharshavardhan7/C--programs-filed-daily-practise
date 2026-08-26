#include<stdio.h>
int armstrong(int a)
{
    int count=0,temp=a,sum=0,i;
    while(temp>0)
    {
        count++;
        temp=temp/10;
    }
    temp=a;
    while(temp>0)
    {
        int digit=temp%10;
        temp=temp/10;
        int power=1;
        for(i=0;i<count;i++)
        {
            power=power*digit;
        }
        sum=sum+power;
    }
    if(sum==a)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("The number is armstrong or not: %d",armstrong(num));
}