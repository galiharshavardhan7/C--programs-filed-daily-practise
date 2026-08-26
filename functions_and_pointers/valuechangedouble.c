#include<stdio.h>
void change(double *p)
{
    *p=*p+15;
    printf("%lf\n",*p);
}
int main()
{
    double x;
    double *p;
    p=&x;
    printf("Enter the double ");
    scanf("%lf",&x);
    change(p);
    
    return 0;
}