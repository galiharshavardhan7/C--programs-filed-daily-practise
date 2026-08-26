#include<stdio.h>
int factorial(int a)
{
    int fact=1;
    while(a>0)
    {
        fact=fact*a;
        a--;
    }
    return fact;
}
int strong(int a)
{
    int sum=0,digit,temp=a;
    
    while(temp>0)
    {
        digit=temp%10;
        sum=sum+factorial(digit);
        temp=temp/10;
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
    printf("The number is strong or not: %d",strong(num));
}