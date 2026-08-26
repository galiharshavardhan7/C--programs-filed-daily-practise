#include<stdio.h>
int main()
{
    int num,sum=0,i;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num<0)
    {
        printf("Error : Invalid Input, Enter only positive number");
        return 0;
    }
    for(i=1;i<num;i++)
    {
        if(num%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==num)
    {
        printf("Yes, entered number is perfect number");
    }
    else
    {
        printf("No, entered number is not a perfect number");
    }
}