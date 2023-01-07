/* Example to Type 4 Function:
 * Write a C program which takes two integer numbers as an input in the main function and 
 * sends them as parameters to a function.
 * Function should receive these numbers then finds and returns the sum of these numbers to main function */

#include <stdio.h>

int sum(int, int);

int main()
{
    int num1, num2, total;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    total = sum(num1, num2);
    printf("Total: %d\n", total);

    return(0);
}

int sum(int x, int y)
{
    return(x + y);
}