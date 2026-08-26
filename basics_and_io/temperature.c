#include<stdio.h>
int main()
{
    float temp;
    printf("Enter the temperature in celsius : ");
    scanf("%f", &temp);
    if(temp>=33)
    {
        printf("It is hot.");
    }
    else if (temp>=25 && temp<33)
    {
        printf("It is warm.");
    }
    else if (temp>=16 && temp<25)
    {
        printf("It is moderate.");
    }
    else if (temp>=1 && temp<16)
    {
        printf("It is chilly.");
    }
    else
    {
        printf("It is freezing cold.");
    }
}