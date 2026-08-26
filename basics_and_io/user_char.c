#include<stdio.h>
void print(char *p)
{
    printf("Value using pointer=%c\n",*p);
}
int main()
{
    char x;
    char *p;
    p=&x;
    printf("Enter the charachter ");
    scanf("%c",&x);
    print(p);
    return 0;
}