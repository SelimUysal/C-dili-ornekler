#include <stdio.h>

int one(int);   /* function prototype */
int a = 8, b;   /* global variable */

int main()
{
    int c = 10; /* local variable */
    b = 4;

    while (a < c)
    {
        c = one(b++);
        a *= 2;
        printf("a=%d b=%d c=%d\n", a, b, c);
    }
}

int one(int a)  /* function definition */
{
    int d = 5;
    a++;
    d *= a;
    printf("a=%d d=%d\n", a, d);

    return (d-a);
}