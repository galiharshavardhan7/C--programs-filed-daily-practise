#include<stdio.h>
int factorial(int a)
{
    int fact=1;
    while(a>0)
    {
        fact=fact*a;
        a--;
    }
}
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("The factorial is: %d",factorial(num));
}