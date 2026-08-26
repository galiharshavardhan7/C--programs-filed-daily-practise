#include<stdio.h>
int main()
{
    int num;
    printf("Enter numbers:");
    while(1)
    {
        scanf("%d",&num);
        if(num%2==0)
        {
            printf("First Even Number Found\n");
            break;
        }
    }
}