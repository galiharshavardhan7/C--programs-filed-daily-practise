#include<stdio.h>
int main()
    {
        int amount, balance = 10000, pin = 6786, entered_pin;
        printf("Enter your four digit PIN: ");
        scanf("%d", &entered_pin);
        if(entered_pin == pin)
        {
            printf("enter the amount to be withdrawn:");
            scanf("%d", &amount);
            if(amount<=balance)
            {
                balance=balance-amount;
                printf("Transaction successful. Your current balance is: %d\n", balance);
            }
            else
            {
                printf("Insufficient funds.\n");
            }
        }
        else
        {
            printf("Invalid PIN.\n");
        }
    }