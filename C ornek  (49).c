/* Write a C program consisting of following functions:
 * main function will read an operator (+, /, *, -) and two real operands,
 * then call the function calculate & display the result of the chosen operation.
 * function calculate will get the operator, two operands and perform the required operation on those operands & return
 * the result by parameter. */

#include <stdio.h>

void calculate(char, double, double, double *);

int main(void)
{
    double n1, n2, result; char c;

    printf("Enter an operator and two real numbers: ");
    scanf("%c %lf %lf", &c, &n1, &n2);
    calculate(c, n1, n2, &result);
    printf("%f %c %f is %f\n", n1, c, n2, result);

    return(0);
}

void calculate(char op, double a, double b, double *res)
{
    switch (op)
    {
    case '+':
        *res = a + b;
        break;
    case '/':
        *res = a / b;
        break;
    case '*':
        *res = a * b;
        break;
    case '-':
        *res = a - b;
        break;
    default:
        printf("Unknown operator\n");
    }
}