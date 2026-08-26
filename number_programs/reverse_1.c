#include<stdio.h>
int reverse(int a)
{
    int rev=0;
    while(a>0)
    {
        rev=rev*10+a%10;
        a=a/10;
    }
    return rev;
}
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("The reverse number is: %d",reverse(num));
}