#include <stdio.h>

void set_int(int* num);

int main()
{
    printf("Hello, world!\n");
    int a = 0;
    set_int(&a);
    printf("%i\n", a);
    return 0;
}

void set_int(int* num)
{
    *num = 12;
}
