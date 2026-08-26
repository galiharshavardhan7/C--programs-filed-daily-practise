#include<stdio.h>
int palindrome(int a)
{
    int rev=0,temp=a;
    while(temp>0)
    {
        rev=rev*10+temp%10;
        temp=temp/10;
    }
    if(rev==a)
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
    printf("The number is palindrome or not: %d",palindrome(num));
}