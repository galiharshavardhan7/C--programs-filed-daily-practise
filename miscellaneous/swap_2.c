#include<stdio.h>
void swap(int *a,int *b)
{
    int temp=0;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int x,y;
    int *a,*b;
    a=&x;
    b=&y;
    printf("Enter the integer x and y");
    scanf("%d%d",&x,&y);
    swap(a,b);
    printf("%d\n",x);
    printf("%d",y);
    return 0;
}