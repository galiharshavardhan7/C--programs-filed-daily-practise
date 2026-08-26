#include<stdio.h>
int main()
{
    int x,y,count,power;
    printf("Enter the x for x^y:");
    scanf("%d",&x);
    printf("Enter the y for x^y:");
    scanf("%d",&y);
    for(count=0,power=1;count<=y;count++)
    {
        printf("%d\n",power);
        power=power*x;
    }
}