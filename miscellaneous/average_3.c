#include<stdio.h>
float average(int a,int b,int c)
{
    return (float)(a+b+c)/3 ;
}
int main()
{
    int num1,num2,num3;
    printf("Enter three numbers: ");
    scanf("%d%d%d",&num1,&num2,&num3);
    printf("The Average is: %f",average(num1,num2,num3));
}