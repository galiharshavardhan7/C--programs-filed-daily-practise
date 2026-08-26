#include<stdio.h>
int main()
{
    int num,count=1,factorial=1;
    printf("Enter a number to find it's factorial:");
    scanf("%d",&num);
    while(count<=num)
    {
        factorial=factorial*count;
        count++;
    }
    printf("%d",factorial);
}