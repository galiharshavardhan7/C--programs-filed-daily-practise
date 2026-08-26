#include<stdio.h>
int main()
{
    int num1,num2,num3,total;
    float avg;
    printf("Enter three numbers:\n");
    scanf("%d%d%d",&num1,&num2,&num3);
    total=num1+num2+num3;
    avg=(num1+num2+num3)/3;
    printf("Total=%d\tAverage=%0.2f\n",total,avg);
    return 0;
}