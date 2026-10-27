#include <stdio.h>

static int file_scope_var = 50;

void modify()
{
    file_scope_var += 15;
    printf("Inside modify(): file_scope_var = %d\n", file_scope_var);
}

int main()
{
    printf("Inside main(): file_scope_var = %d\n", file_scope_var);
    modify();
    printf("After modify() in main(): file_scope_var = %d\n", file_scope_var);
    return 0;
}
