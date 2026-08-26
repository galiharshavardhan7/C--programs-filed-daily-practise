#include<stdio.h>
int main()
{
    int n,power,count;
    printf("Enter n:");
    scanf("%d",&n);
    for(power=1,count=0;count<=n;count++)
    {
        printf("%d\n",power);
        power=power*2;
    }
    
}