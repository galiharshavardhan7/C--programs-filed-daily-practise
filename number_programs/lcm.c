#include<stdio.h>
int LCM (int a,int b)
{
    int i,lcm=1;
    for(i=1;i<=a*b;i++)
    {
        if(i%a==0 && i%b==0)
        {
            lcm=i;
            break;
        }
    }
    return lcm;
}
int main()
{
    int num1,num2;
    printf("Enter the two numbers: ");
    scanf("%d%d",&num1,&num2);
    printf("The LCM is: %d",LCM(num1,num2));
}