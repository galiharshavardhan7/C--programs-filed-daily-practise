#include<stdio.h>
int main()
{
    int i,j,size;
    printf("Enter the size\n");
    scanf("%d",&size);
    int marks[size];
    printf("Enter the marks\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&marks[i]);
    }
    printf("%ld",sizeof(marks));
    printf("Entered marks are:\n");
    for(j=0;j<size;j++)
    {
        printf("%d\n",marks[j]);
    }
}