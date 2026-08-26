#include<stdio.h>
int function()
{
    int x=1;
    printf("%d\n",x);
    x++;
}
int main()
{
    int x,a;
    function();
    printf("%d\n",x);
    a= function();
    printf("%d\n",a);
}