#include<stdio.h>
int main()
{
    int n,a,d;
    printf("Enter the first term:");
    scanf("%d",&a);
    printf("Enter a common difference:");
    scanf("%d",&d);
    printf("Enter a number of terms:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("a%d=%d\n",i+1,a+(i*d));
    }
}