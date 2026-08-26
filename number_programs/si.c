#include<stdio.h>
int main()
{
    float SI,P,R,T;
    printf("Enter the principal amount:");
    scanf("%f",&P);
    printf("Enter the rate of interest:");
    scanf("%f",&R); 
    printf("Enter the time period:");
    scanf("%f",&T);
    SI=(P*R*T)/100;
    printf("Simple Interest=%0.2f\n",SI);
}