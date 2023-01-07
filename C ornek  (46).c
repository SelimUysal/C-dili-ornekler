#include <stdio.h>

void factorial(int n, int *fact);
int main(void)
{
    int result;

    factorial(4, &result);
    printf("Factorial of %d is %d\n", 4, result);

    return(0);
}
void factorial(int n, int *fact)
{
    int i;
    *fact = 1;

    for (i = 1; i <= n; i++)
        *fact = *fact * i;
}