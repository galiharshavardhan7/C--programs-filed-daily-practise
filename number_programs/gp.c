#include<stdio.h>
int main()
{
    int n,a,r,term;
    printf("Enter the first term:");
    scanf("%d",&a);
    printf("Enter a common ratio.:");
    scanf("%d",&r);
    printf("Enter a number of terms:");
    scanf("%d",&n);
    term=a;
    for(int i=0;i<n;i++)
    {
        printf("a%d=%d\n",i+1,term);
        term=term*r;
    }
}