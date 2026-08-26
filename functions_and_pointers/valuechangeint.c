#include<stdio.h>
void change(int *p)
{
    *p=*p+40;
    printf("%d",*p);
}
int main()
{
    int x;
    int *p;
    p=&x;
    printf("Enter the integer ");
    scanf("%d",&x);
    change(p);
    
    return 0;
}