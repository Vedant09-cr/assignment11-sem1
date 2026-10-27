#include <stdio.h>

extern int global_num;

int main()
{
    printf("Accessing global variable defined in another file:\n");
    printf("global_num = %d\n", global_num);
    return 0;
}
