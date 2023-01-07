
/* Declare 2 10-element double arrays & I/P their elements using a function. */
#include <stdio.h>

void input(double [], int);

main()
{
    double a[10], b[10];

    input(a, 10);
    input(b, 10);
    for (int i = 0; i < 10; i++)
        printf("%f ", a[i]);
    for (int j = 0; j < 10; j++)
        printf("%f ", b[j]);
}

void input(double p[], int s)
{
    int i;
    
    for (i = 0; i < s; i++)
        scanf("%lf", &p[i]);
}