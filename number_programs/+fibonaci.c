#include<stdio.h>
int main()
{
    int first=0,second=1,temp,num;
    printf("Enter range of fibonaci:");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        printf("%d\n",first);
        temp=first+second;
        first=second;
        second=temp;
    }
}