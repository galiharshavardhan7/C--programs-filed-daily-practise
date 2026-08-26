#include<stdio.h>
int main()
    {
        int aptitude;
        float cgpa;
        printf("Enter the cgpa :");
        scanf("%f",&cgpa);
        if(cgpa>=7)
        {
            printf("Enter aptitude 1 or 0:");
            scanf("%d",&aptitude);
            if(aptitude==1)
            {
                printf("Next is HR round ");
            }
            else
            {
                printf("Out of the round.try again");
            }
        }
        else
        {
            printf("not eligible for placement");
        }
    }
