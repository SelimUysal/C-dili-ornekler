#include <stdio.h>
#include <math.h>

void func(int x, double *result);

int main(void)
{
    int num; double res;

    printf("Enter a number: ");
    scanf("%d", &num);
    func(num, &res);
    printf("The result is: %f\n", res);

    return (0);
}

void func(int x, double *result)
{
    if (x < 0)
        *result = pow(3, x);
    else
        *result = pow(x, 2);
}