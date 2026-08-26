#include<stdio.h>
int main()
    {
        int age,nationality;
        printf("Are you an Indian citizen? (1 for Yes, 0 for No): ");
        scanf("%d",&nationality);
        if(nationality==1)
        {
            printf("Enter your age: ");
            scanf("%d",&age);
            if(age>=18)
            {
                printf("You are eligible to vote.\n");
            }
            else
            {
                printf("You are not eligible to vote.\n");
            }
        }
        else
        {
            printf("You are not eligible to vote as you are not an Indian citizen.\n");
        }
    }