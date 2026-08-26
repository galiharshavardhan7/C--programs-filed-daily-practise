#include<stdio.h>
void print(float *p)
{
    printf("Value using pointer=%g\n",*p);
}
int main()
{
    float x=10.22;
    float *p;
    p=&x;
    print(p);
    return 0;
}