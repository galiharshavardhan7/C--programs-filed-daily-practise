#include<stdio.h>
int main()
{
    int num,i;
    printf("enter number");
    scanf("%d",&num);
    if((num>=0 && num<=100)||(num>=-50 && num<=70))
    {
        printf("The number is in the range.");
    }
    else{
        printf("The number is not in the range.");
    }
}