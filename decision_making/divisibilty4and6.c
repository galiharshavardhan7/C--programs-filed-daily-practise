#include<stdio.h>
int main()
{
    int count;
    for(count=1;count<=100;count++)
    {
        printf("%d ",count);
        if (count%4==0 && count%6==0)
        {
            break;
        }
    }
}