#include<stdio.h>
#include<string.h>
int main()
{
    char user_name[11]="jesvin123",password[9]="12345678",entered_username[11],entered_password[9];
    printf("Enter the username :");
    scanf("%10s",entered_username);
    if(strcmp(entered_username, user_name) == 0)
    {
        printf("Enter the password:\n");
        scanf("%8s",entered_password);
        if(strcmp(entered_password, password) == 0)
        {
            printf("Thank you for login.\n");
        }
        else
        {
            printf("Password is incorrect.\n");
        }
    }
    else
    {
        printf("Please enter correct username.\n");
    }
}