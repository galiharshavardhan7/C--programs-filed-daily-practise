#include<stdio.h>
int main()
{
    int n,a,d,r,term;
    printf("Enter the first term,common difference,numberof terms:");
    scanf("%d%d%d",&a,&d,&n);
    printf("Arithmetic Progression:\n");
    for(int i=0;i<n;i++)
    {
        printf("a%d=%d\n",i+1,a+(i*d));
    }
    printf("Enter a common ratio.:");
    scanf("%d",&r);
    term=a;
    for(int i=0;i<n;i++)
    {
        printf("a%d=%d\n",i+1,term);
        term=term*r;
    }
}
