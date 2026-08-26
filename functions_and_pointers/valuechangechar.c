#include<stdio.h>
void change(char *p)
{
    *p=*p+25;
    printf("%c",*p);
}
int main()
{
    char x;
    char *p;
    p=&x;
    printf("Enter the char ");
    scanf("%c",&x);
    change(p);
    
    return 0;
}