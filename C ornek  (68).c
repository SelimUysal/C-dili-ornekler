/* Now multiplication is also done in a function */

#include <stdio.h>

struct rational
{
    int num, den;
};

struct rational input();
struct rational multiply(struct rational, struct rational);

main()
{
    struct rational n1, n2, prod;

    n1 = input();
    n2 = input();
    prod = multiply(n1, n2);
    printf("%d / %d * %d / %d = %d / %d\n", n1.num, n1.den, n2.num, n2.den, prod.num, prod.den);   
}

struct rational input()
{
    struct rational x;

    printf("Enter numerator & denominator of the rational number: ");
    scanf("%d %d", &x.num, &x.den);
    
    return(x);
}

struct rational multiply(struct rational x, struct rational y)
{
    struct rational res;

    res.num = x.num * y.num;
    res.den = x.den * y.den;

    return(res);
}