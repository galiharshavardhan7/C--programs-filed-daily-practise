#include<stdio.h>
float function(int x);
int main()
{
    int x,y;
    x=2;
    y= function(x);
    printf("%d\n",y);
}
float function(int x)
{
    return x+1;
}
