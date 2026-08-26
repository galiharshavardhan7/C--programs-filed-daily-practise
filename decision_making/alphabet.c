#include<stdio.h>
int main()
    {
        char ch;
        printf("Enter the character :");
        scanf("%d",&ch);
        if((ch>='A' && ch<='Z') || (ch>='a' &&  ch<='z'))
        {
            printf("Its an Alphabet.");
        }
        else
        {
            printf("Its not an Alphabet");
        }
    }
