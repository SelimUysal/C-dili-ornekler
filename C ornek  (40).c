#include <stdio.h>

int main(void)
{
    int a = 4, b = 6;
    int *pa = &a;
    b = *pa;

    printf("%d %d\n", a, b);
    return(0);
}