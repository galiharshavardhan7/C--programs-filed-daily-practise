#include<stdio.h>
int main()
{
    int n,num=0;
    printf("Enter the limit:");
    scanf("%d",&n);
    s:
        printf("%d\n",num);
        num++;
    if((n-1)>0)
    {
        n--;
        goto s;
    }
}