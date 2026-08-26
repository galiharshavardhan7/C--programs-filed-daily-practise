#include<stdio.h>
int main()
{
    char pass;
    int count;
    printf("Enter the password");
    scanf("%s",&pass);
    count=strlen(pass);
    if(count>=8)
    {
        printf("Password is valid");
    }
    else
    {
        printf("password is invalid");
    }
    return 0;
}