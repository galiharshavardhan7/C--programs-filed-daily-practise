#include<stdio.h>
int number_of_digit(int a)
{
    int count=0;
    while(a>0)
    {
        count++;
        a=a/10;
    }
    return count;
}
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("The number of digit is: %d",number_of_digit(num));
}