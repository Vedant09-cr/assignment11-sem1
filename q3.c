#include <stdio.h>

void compare()
{
    auto int a = 1;
    static int s = 1;

    printf("auto = %d, static = %d\n", a, s);

    a++;
    s++;
}

int main()
{
    for (int i = 1; i <= 3; i++)
    {
        printf("Function call %d: ", i);
        compare();
    }

    return 0;
}
