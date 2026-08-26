#include<stdio.h>
int main()
{
    int num,rev1=0,rev2=0,digits,temp;
    printf("Enter your number:");
    scanf("%d",&num);
    temp=num;
    while(temp>0)
    {
        digits=temp%10;
        temp=temp/10;
        if(digits==0)
        {
            continue;
        }
        rev1=rev1*10+digits;
    }
    while(rev1>0)
    {
        digits=rev1%10;
        rev1=rev1/10;
        rev2=rev2*10+digits;
    }
    printf("New number without 0 =%d\n",rev2);
}