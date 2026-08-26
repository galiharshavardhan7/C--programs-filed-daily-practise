#include<stdio.h>
int main()
    {
        int age,income,cbil_score;
        printf("Enter your age: ");
        scanf("%d",&age);
        if(age>=18)
        {
            printf("Enter your annual income: ");
            scanf("%d",&income);
            if(income>=250000)
            {
                printf("Enter your CIBIL score: ");
                scanf("%d",&cbil_score);
                if(cbil_score>=750)
                {
                    printf("You are eligible to apply for a bank loan.\n");
                }
                else
                {
                    printf("You are not eligible to apply for a bank loan due to low CIBIL score.\n");
                }
            }
            else
            {
                printf("You are not eligible to apply for a bank loan due to low income.\n");
            }
        }
        else
        {
            printf("You are not eligible to apply for a bank loan.\n");
        }
    }