#include <stdio.h>

extern void deposit(double amount);
extern void withdraw(double amount);
extern double getBalance();

int main()
{
    printf("Current Balance: %.2f\n", getBalance());
    deposit(500.0);
    printf("Current Balance: %.2f\n", getBalance());
    withdraw(300.0);
    printf("Current Balance: %.2f\n", getBalance());
    return 0;
}
