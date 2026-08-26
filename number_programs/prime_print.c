#include<stdio.h>
int main()
{
    int num,i,j;
    printf("Enter the limit:");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j == 0)
            {
                break;
            }
        }
        if(i==j)
        {
            printf("%d\n",i);
        }
    }
}