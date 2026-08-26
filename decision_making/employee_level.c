#include<stdio.h>
int main()
{
    int year;
    printf("Enter your years of experience :");
    scanf("%d",&year);
    if(year>=10)
    {
        printf("You are a senior employee");
    }
    else if(year>=5 && year<10)
    {
        printf("You are a mid-level employee");
    }
    else
    {
        printf("You are a junior employee");
    }
}