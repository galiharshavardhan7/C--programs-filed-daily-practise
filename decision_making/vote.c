#include<stdio.h>
int main()
{
    int a;
    printf("Enter the age of the person:");
    scanf("%d",&a);
    if(a>=18)
    {
        printf("The person is eligible to vote.\n");
    }
    else
    {
        printf("The person is not eligible to vote.\n");
    }
    return 0;
}