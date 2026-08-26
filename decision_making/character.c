#include<stdio.h>
void print(char *p)
{
    printf("Value using pointer=%c\n",*p);
}
int main()
{
    char x='a';
    char *p;
    p=&x;
    print(p);
    return 0;
}