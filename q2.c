#include <stdio.h>

int x = 100;

int main()
{
    printf("Global x = %d\n", x);

    int x = 20;
    printf("Local x in main (hides global x) = %d\n", x);

    {
        int x = 5;
        printf("Inner block x (hides outer local x) = %d\n", x);
    }

    printf("Back to outer local x = %d\n", x);

    return 0;
}
