#include<stdio.h>
int main()
{
    int num,i=2,j,count=0;
    printf("Enter the number of prime needed:");
    scanf("%d",&num);
    while(count<num)
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
            count++;
        }
        i++;
    }
}