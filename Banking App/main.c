#include <stdio.h>
#include <stdlib.h>

float checkBalance(float balance);
float deposit(float balance, float amount);
float withdraw(float balance, float amount);

int main()
{
    int choice;
    float balance = 0.0;
    printf("*** BANKING APP ***\n");
    while (1)
    {
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            balance = checkBalance(balance);
            break;
        case 2:
            float amount;
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);
            balance = deposit(balance, amount);
            break;
        case 3:
            float withdrawAmount;
            printf("Enter amount to withdraw: ");
            scanf("%f", &withdrawAmount);
            balance = withdraw(balance, withdrawAmount);
            break;
        default:
            printf("Invalid choice!\n");
        }
    }

    return 0;
}

float checkBalance(float balance)
{
    printf("Your current balance is: $%.2f\n", balance);
    return balance;
}

float deposit(float balance, float amount)
{
    if (amount < 0.0)
    {
        printf("Invalid amount! Please enter a positive value.\n");
        return balance;
    } 
    else if(typeof(amount) != float){
        printf("Invalid input! Please enter a numeric value.\n");
        return balance;
    }
    balance += amount;
    printf("You have deposited: $%.2f\n", amount);
    printf("Your new balance is: $%.2f\n", balance);
    return balance;
}

float withdraw(float balance, float amount)
{
    if (amount > balance)
    {
        printf("Insufficient funds!\n");
    }
    else if (amount < 0.0)
    {
        printf("Invalid amount! Please enter a positive value.\n");
    }
    else
    {
        balance -= amount;
        printf("You have withdrawn: $%.2f\n", amount);
        printf("Your new balance is: $%.2f\n", balance);
    }
    return balance;
}