/* Write a function that accepts radius of a circle and returns its area and 
 * circumference by parameter. main should input the radius value, 
 * call the function and displays the results. */

#include <stdio.h>

void circle_calculate(double r, double *ar, double *cir);

int main(void)
{
    double radius, area, circum;

    printf("Enter radius: ");
    scanf("%lf", &radius);
    circle_calculate(radius, &area, &circum);
    printf("Area: %f Circumference: %f\n", area, circum);

    return(0);
}

void circle_calculate(double r, double *ar, double *cir)
{
    *ar = 3.14 * r * r;
    *cir = 2 * r * 3.14;
}