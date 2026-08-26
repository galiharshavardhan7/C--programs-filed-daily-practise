#include<stdio.h>
int main()
{
    int weight,shipping_price;
    printf("Enter the weight of the package in kg :");
    scanf("%d",&weight);
    if(weight<=1)
    {
        printf("The price of the package is : 50");
    }
    else if(weight>1 && weight<=5)
    {
        printf("The price of the package is : 100");
    }
    else if(weight>5 && weight<=10)
    {
        printf("The price of the package is : 200");
    }
    else
    {
        shipping_price = 200 + (weight-10)*30;
        printf("The price of the package is : %d",shipping_price);
    }
}