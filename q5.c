#include <stdio.h>

int getUniqueID()
{
    static int id = 1000;
    id++;
    return id;
}

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        printf("Employee %d ID: %d\n", i, getUniqueID());
    }

    return 0;
}
