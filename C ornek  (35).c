/* Example to Type 3 Function:
 * Write a C program which takes two integer numbers as an input in the main function and
 * sends them as parameters to a function.
 * Function should receive these numbers then finds and display the sum of these numbers. */

#include <stdio.h>

void sum(int, int);

int main()
{
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    sum(num1, num2);

    return(0);
}

void sum(int x, int y)
{
    int total;

    total = x + y;
    printf("Total: %d\n", total);
}