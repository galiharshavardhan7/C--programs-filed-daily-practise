#include<stdio.h>
void change(float *p)
{
    *p=*p+15;
    printf("%g",*p);
}
int main()
{
    float x;
    float *p;
    p=&x;
    printf("Enter the floating number ");
    scanf("%f",&x);
    change(p);
    
    return 0;
}