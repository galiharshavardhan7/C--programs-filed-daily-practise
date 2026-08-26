#include<stdio.h>
int main()
{
    int num,n,i,largest;
    printf("Enter the limit:");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("Imvalid input.");
        return 0;
    }
    printf("Enter number1:");
    scanf("%d",&largest);
    for(i=2;i<=n;i++)
    {
        printf("Enter number%d:",i);
        scanf("%d",&num);
        if(num>largest)
        {
            largest=num;
        }
    }   
    printf("Largest =%d",largest);
}