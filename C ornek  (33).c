/* Example to Type 1 Function:
 * Write a C program which takes two integer numbers as an input in a function and
 * displays the sum of these numbers in this function.
 * Main program should only call the function. */

#include <stdio.h>

void sum();

int main()
{
    sum();

    return(0);
}

void sum()
{
    int num1, num2, total;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    total = num1 + num2;
    printf("Total: %d\n", total);
}