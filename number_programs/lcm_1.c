#include<stdio.h>
int main()
{
    int num1,num2,lcm=1,i=1,largest;
    printf("Enter the number1:");
    scanf("%d",&num1);
    printf("Enter the number2:");
    scanf("%d",&num2);
    if(num1>num2)
    {
        largest=num1;
    }
    else
    {
        largest=num2;
    }
    i=largest;
    while(1)
    {
        if(i%num1==0 && i%num2==0)
        {
            lcm=i;
            break;
        }
        i++;
        
    }
    printf("%d",lcm);
}