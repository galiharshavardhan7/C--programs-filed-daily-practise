#include<stdio.h>
float sum(float *a,float *b)
{
    return *a+*b;
}
int main()
{
    float x,y;
    float *a,*b;
    a=&x;
    b=&y;
    printf("Enter the integer x");
    scanf("%f",&x);
    printf("Enter the integer y");
    scanf("%f",&y);
    printf("%g",sum(a,b));
    return 0;
}