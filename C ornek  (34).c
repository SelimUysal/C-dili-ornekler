/* Example to Type 2 Function:
 * Write a C program which takes two integer numbers as an input in a function and
 * returns the sum of these numbers to the main program.
 * Main program should call the function and display the result. */

#include <stdio.h>

int sum();

int main()
{
    int result;
    
    result = sum();
    printf("Total: %d\n", result);

    return(0);
}

int sum()
{
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    return(num1 + num2);
}