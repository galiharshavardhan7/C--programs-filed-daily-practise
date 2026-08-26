#include<stdio.h>
int main()
    {
        float C,F;
        printf("Enter the celsius value:");
        scanf("%f",&C);
        F=((9*C/5)+32);
        printf("Fahrenheit=%0.2f\n",F);
        return 0;
    }
