#include<stdio.h>
int main()
{
    int marks;
    printf("Enter your marks :");
    scanf("%d",&marks);
    if(marks>=90)
    {
        printf("Distinction");
    }
    else if(marks>=70)
    {
        printf("First class");
    }
    else if(marks>=60)
    {
        printf("Second class");
    }
    else
    {
        printf("Fail");
    }

}