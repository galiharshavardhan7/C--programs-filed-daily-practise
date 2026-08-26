#include<stdio.h>
int main()
{
    long int a=0x12563545AB;
    char *ptr=(char *)&a;
    if(*ptr==0xAB)
    {
        printf("Little Endian");
    }   
    else{
        printf("Big Endian");
    }
}