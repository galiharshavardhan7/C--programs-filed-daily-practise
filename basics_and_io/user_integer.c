#include<stdio.h>
void print(int *p)
{
    printf("Value using pointer=%d\n",*p);
}
int main()
{
    int x;
    int *p;
    p=&x;
    printf("Enter the integer");
    scanf("%d",&x);
    print(p);
    return 0;
}