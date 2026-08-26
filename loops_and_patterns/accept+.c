#include<stdio.h>
int main()
{
    int num;
    printf("Enter numbers:");
    while(1)
    {
        scanf("%d",&num);
        if(num<0)
        {
            break;
        }
    }
}