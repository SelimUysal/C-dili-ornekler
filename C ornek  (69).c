/* Rewrite the multiply function in Rational number problem 
 * where the product is returned as a call by reference parameter (pointer) */

#include <stdio.h>

struct rational
{
    int num, den;
};

struct rational input();
void multiply(struct rational, struct rational, struct rational*);

main()
{
    struct rational n1, n2, prod;

    n1 = input();
    n2 = input();
    multiply(n1, n2, &prod);
    printf("%d / %d * %d / %d = %d / %d\n", n1.num, n1.den, n2.num, n2.den, prod.num, prod.den);   
}

struct rational input()
{
    struct rational x;

    printf("Enter numerator & denominator of the rational number: ");
    scanf("%d %d", &x.num, &x.den);
    
    return(x);
}

void multiply(struct rational x, struct rational y, struct rational *resptr)
{
    //struct rational res;

    resptr->num = x.num * y.num;
    resptr->den = x.den * y.den;
}