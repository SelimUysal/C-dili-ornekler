#include <stdio.h>

void total_n(int n, int *total);

int main(void)
{
    int result;
    
    total_n(10, &result);
    printf(" The total of numbers is %d\n", result);

    return(0);
}

void total_n(int n, int *total)
{
    int i;
    *total = 0;

    for (i = 1; i <= n; i++)
    *total += i;
}