#include<stdio.h>
void print(int *p)
{
    printf("Value using pointer=%d\n",*p);
}
int main()
{
    int x=10;
    int *p;
    p=&x;
    print(p);
    return 0;
}