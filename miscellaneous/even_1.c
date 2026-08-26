#include<stdio.h>
int even(int a)
{
   if(a%2==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int num;
    printf("Enter the num");
    scanf("%d",&num);
    printf("%d",even(num));
}