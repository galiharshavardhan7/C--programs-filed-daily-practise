#include<stdio.h>
int main()
{
    int x=10;
    int *p;
    p=&x;
    printf("Value of x=%d\n",x);
    printf("Address of x =%p\n",&x);
    printf("Value stored in p=%p\n",p);
    printf("Address of pointer variable =%p\n",&p);
    printf("Value using pointer=%d\n",*p);
    printf("Size of x variable =%zu\n",sizeof(x));
    printf("Size of *p variable =%zu\n",sizeof(*p));
    printf("Size of &x =%zu\n",sizeof(&x));
    printf("Size of p variable =%zu\n",sizeof(p));
    return 0;
}