#include<stdio.h>
void print(double *p)
{
    printf("Value using pointer=%g\n",*p);
}
int main()
{
    double x=10.22;
    double *p;
    p=&x;
    print(p);
    return 0;
}