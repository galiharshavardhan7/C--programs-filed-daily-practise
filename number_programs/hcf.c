#include<stdio.h>
int main()
{
    int num1,num2,hcf=1,i=1,smallest;
    printf("Enter the number1:");
    scanf("%d",&num1);
    printf("Enter the number2:");
    scanf("%d",&num2);
    if(num1<num2)
    {
        smallest=num1;
    }
    else
    {
        smallest=num2;
    }
    while(i<=smallest)
    {
        if(num1%i==0 && num2%i==0)
        {
            hcf=i;
        }
        i++;
        
    }
    printf("%d",hcf);
}