#include <stdio.h>

int counter = 20;
void increment();

int main()
{
    printf("Initial counter in file 1: %d\n", counter);
    increment();
    printf("Counter after modification by file 2: %d\n", counter);
    return 0;
}
