#include<stdio.h>
int even(int *p)
{
   if(*p%2==0)
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
    int *p;
    p=&num;
    printf("Enter the num");
    scanf("%d",&num);
    printf("%d",even(p));
}