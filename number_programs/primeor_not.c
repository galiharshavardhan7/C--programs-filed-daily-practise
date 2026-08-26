#include<stdio.h>
int prime(int a)
{
    int i;
    for(i=2;i<a;i++)
    {
        if(a%i==0)
        {
            return 0;
        }
        else
        {
            continue;
        }
    }
    return 1;
}
int main()
{
    int num;
    printf("Enter number:");
    scanf("%d",&num);
    printf("The number is prime or not: %d",prime(num));
}