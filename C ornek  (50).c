/* Write a function that accepts a positive 3-digit integer and 
 * returns the sum of its digits by parameter. main program should input the integer value,
 * call the function and print the result. */

#include <stdio.h>

void sumof_digits(int n, int *sum);

int main(void)
{
    int num, result;

    printf("Enter a positive 3-digit integer: ");
    scanf("%d", &num);
    sumof_digits(num, &result);
    printf("The sum of the entered number %d digits is: %d\n", num, result);

    return(0);
}

void sumof_digits(int n, int *sum)
{
    int temp;
    *sum = 0;

    while (n > 0)
    {
        temp = n % 10;
        *sum += temp;
        n = n / 10;
    }
}