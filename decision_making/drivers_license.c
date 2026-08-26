#include<stdio.h>
int main()
    {
        int age,learning_test,driving_test;
        printf("Enter your age: ");
        scanf("%d",&age);
        if(age>=18)
        {
            printf("Did you pass the learning test? (1 for yes, 0 for no): ");
            scanf("%d", &learning_test);
            if(learning_test == 1)
            {
                printf("Did you pass the driving test? (1 for yes, 0 for no): ");
                scanf("%d", &driving_test);
                if(driving_test == 1)
                {
                    printf("Congratulations! You are eligible to apply for a driver's license.\n");
                }
                else
                {
                    printf("You need to pass the driving test first.\n");
                }
            }
            else
            {
                printf("You need to pass the learning test first.\n");
            }
        }
        else
        {
            printf("You are not eligible to apply for a driver's license due to underage.\n");
        }
    }