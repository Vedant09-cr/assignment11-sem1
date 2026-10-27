#include <stdio.h>

void test()
{
    auto int a = 10;
    printf("Inside function: a = %d\n", a);
}

int main()
{
    printf("Entering outer block\n");
    {
        auto int x = 25;
        printf("Inside inner block: x = %d\n", x);
    }
    printf("Exited inner block (x is destroyed)\n");

    test();
    test();

    return 0;
}
