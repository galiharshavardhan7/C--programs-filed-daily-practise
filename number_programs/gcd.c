#include<stdio.h>
int GCD(int a,int b)
{
    int i,gcd=1,small;
    if(a<b)
    {
        small=a;
    }
    else
    {
        small=b;
    }
    for(i=1;i<=small;i++)
    {
        if(a%i==0 && b%i==0)
        {
            gcd=i;
        }
    }
    return gcd;
}
int main()
{
    int num1,num2;
    printf("Enter the two numbers: ");
    scanf("%d%d",&num1,&num2);
    printf("The GCD is: %d",GCD(num1,num2));
}