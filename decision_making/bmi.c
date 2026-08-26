#include<stdio.h>
int main()
{
    float height, weight, bmi;
    printf("Enter your height in meters and weight in kg :");
    scanf("%f %f",&height,&weight);
    bmi=weight/(height*height);
    if(bmi<18.5)
    {
        printf("Your BMI is %0.2f and you are underweight",bmi);
    }
    else if(bmi>=18.5 && bmi<24.9)
    {
        printf("Your BMI is %0.2f and you are normal weight",bmi);
    }
    else if(bmi>=25 && bmi<29.9)
    {
        printf("Your BMI is %0.2f and you are overweight",bmi);
    }
    else
    {
        printf("Your BMI is %0.2f and you are obese",bmi);
    }
}