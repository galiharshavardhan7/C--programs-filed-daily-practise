#include<stdio.h>
void print(double *p)
{
    printf("Value using pointer=%lf\n",*p);
}
int main()
{
    double x;
    double *p;
    p=&x;
    printf("Enter the double ");
    scanf("%lf",&x);
    print(p);
    return 0;
}