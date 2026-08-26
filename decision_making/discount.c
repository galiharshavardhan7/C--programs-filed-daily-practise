#include<stdio.h>
int main()
{
    float price1,price2,price3,discount,total_price,final_price;
    printf("Enter the price of three items :");
    scanf("%f %f %f",&price1,&price2,&price3);
    printf("Enter the discount percentage :");
    scanf("%f",&discount);
    total_price = price1 + price2 + price3;
    if (total_price>5000)
    {
        final_price = total_price - (total_price*discount/100);
        printf("Total price after discount is : %0.2f",final_price);
    }
    else
    {
        printf("Total price is less than 5000, no discount applied.");
    }
}