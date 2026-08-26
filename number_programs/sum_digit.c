#include<stdio.h>
int sum_of_digit(int a)
{
    int sum=0;
    while(a>0)
    {
        sum=sum+a%10;
        a=a/10;
    }
    return sum;
}
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("The sum of digit is: %d",sum_of_digit(num));
}