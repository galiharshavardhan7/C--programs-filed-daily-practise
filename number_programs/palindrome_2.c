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
    if(num==rev)
    {
        printf("%d is a palindrome\n",num);
    }
    else
    {
        printf("%d is not a palindrome\n",num);
    }
}