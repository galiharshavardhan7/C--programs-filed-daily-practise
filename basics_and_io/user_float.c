#include<stdio.h>
void print(float *p)
{
    printf("Value using pointer=%f\n",*p);
}
int main()
{
    float x;
    float *p;
    p=&x;
    printf("Enter the float ");
    scanf("%f",&x);
    print(p);
    return 0;
}