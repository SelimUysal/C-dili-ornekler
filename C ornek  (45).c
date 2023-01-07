/* Write a function that receives the width & length of a rectangle as parameters &
 * returns the area and circumference. main function should read the width & length and
 * display the area & circumference */
#include <stdio.h>

void compute(float a, float b, float *ar, float *cir)
{
    *ar = a * b;
    *cir = 2 * (a + b);
}

int main()
{
    float w, l, area, circum;

    printf("Enter sides: ");
    scanf("%f %f", &w, &l);
    compute(w, l, &area, &circum);
    printf("Area = %f\n", area);
    printf("Circumference = %f\n", circum);
    
    return(0);
}