#include<stdio.h>
int main()
{
    int i,j,num,temp;
    scanf("%d",&num);
    temp=num;
    for(i=1;i<=num;i++)
    {
        for(j=1;j<=num;j++)
        {
            if(i==j||(i+j-1)==num)
            {
                printf("* ");
            }
            else
            {
                printf("_ ");
            }
        }
        printf("\n");
    }
}