#include<stdio.h>
int main()
{
    int value,i,size,found=0;
    printf("Enter the size : ");
    scanf("%d",&size);
    int num[size];
    for(i=0;i<size;i++)
    {
        printf("num[%d]=",i);
        scanf("%d",&num[i]);
    }
    printf("Enter the key value : ");
    scanf("%d",&value);
    for(i=0;i<size;i++)
    {
        if(num[i]==value)
        {
            found=1;
        }
        else
        {
            found=0;
        }
    }
    if(found==1)
    {
        printf("Value is found in num[%d]",i);
    }
    else
    {
        printf("Value is not found ");
    }
}