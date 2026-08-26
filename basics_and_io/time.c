#include<stdio.h>
int main()
{
    int time;
    printf("Enter time ");
    scanf("%d",&time);
    if (time>= 0 && time<12)
    {
        printf("good morning");
    }
    else if (time>= 12 && time<18)
    {
        printf("good afternoon");
    }
    else if (time>= 18 && time<=23)
    {
        printf("good night");
    }
    else
    {
        printf("Enter valid time");
    }
}