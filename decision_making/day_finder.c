#include<stdio.h>
int main()
{
    int start,n,day_num;
    printf("Enter the value of 'n' : ");
    scanf("%d",&n);
    if(n<=0 || n>365)
    {
        printf("Error: Invalid Input, n value should be > 0 and <= 365\n");
        return 0;
    }
    printf("Choose First Day :\n1.Sunday\n2.Monday\n3.Tuesday\n4.Wednesday\n5.Thursday\n6.Friday\n7.Saturday\n");
    printf("Enter the option to set the first day :");
    scanf("%d",&start);
    if(start<=0 || start>7)
    {
        printf("Error: Invalid input, first day should be > 0 and <= 7\n");
        return 0;
    }
    day_num=start+n-1;
    if(day_num>7)
    {
        day_num=day_num%7;
    }
    switch(day_num)
    {
        case 1:
        printf("Sunday");
        break;
        case 2:
        printf("Monday");
        break;
        case 3:
        printf("Tuesday");
        break;
        case 4:
        printf("Wednesday");
        break;
        case 5:
        printf("Thusday");
        break;
        case 6:
        printf("Friday");
        break;
        case 7:
        printf("Saturday");
        break;
    }
}