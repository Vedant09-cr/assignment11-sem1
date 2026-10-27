#include <stdio.h>

static double balance = 1000.0;

void deposit(double amount)
{
    if (amount > 0)
    {
        balance += amount;
        printf("Deposited: %.2f\n", amount);
    }
}

void withdraw(double amount)
{
    if (amount > 0 && amount <= balance)
    {
        balance -= amount;
        printf("Withdrawn: %.2f\n", amount);
    }
    else
    {
        printf("Insufficient balance\n");
    }
}

double getBalance()
{
    return balance;
}
