#include<stdio.h>
int main()
{
    int i,j,num;
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        for(j=1;j<=num;j++)
        {
            if(i==j)
            {
                printf("%d",i);
            }
            else if((i+j-1)==num)
            {
                printf("%d",j);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}