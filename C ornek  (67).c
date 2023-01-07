/* Now the structure is inputted in a function */

#include <stdio.h>

struct rational
{
    int num;
    int den;
};

struct rational input();

main()
{
    struct rational n1, n2, prod;
    
    n1 = input();
    n2 = input();
    prod.num = n1.num * n2.num;
    prod.den = n1.den * n2.den;
    printf("%d / %d * %d / %d = %d / %d\n", n1.num, n1.den, n2.num, n2.den, prod.num, prod.den);
}

struct rational input()
{
    struct rational x;

    printf("Enter numerator & denominator of the rational number:");
    scanf("%d %d", &x.num, &x.den);

    return(x);
}