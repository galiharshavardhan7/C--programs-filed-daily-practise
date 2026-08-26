#include<stdio.h>
int main()
{
    int i,size;
    printf("Enter the size\n");
    scanf("%d",&size);
    int arrorg[size],arrbak[size];
    printf("Enter the numbers\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arrorg[i]);
        arrbak[i]=arrorg[i];
    }
    for(i=0;i<size;i++)
    {
        printf("arrbak[%d]=%d\n",i,arrbak[i]);
    }
}