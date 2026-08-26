#include<stdio.h>
int main()
{
    int pass_mark=35, marks;
    printf("Enter the marks of the student:");
    scanf("%d",&marks);
    if(marks>=pass_mark)
    {
        printf("The student has passed the exam.\n");
    }
    else
    {
        printf("The student has failed the exam.\n");
    }
    return 0;
}