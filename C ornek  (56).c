#include <stdio.h>
void tricky1(int *x, int y);
void tricky2(int *x, int y);
int a=5, b=5;
int main()
{
    int a,b;
    a=1; b=2;
    printf("%3d%3d\n", a,b);
    tricky1(&a,b);
    printf("%3d%3d\n", a,b);
    return 0;
}
void tricky1(int *x, int y)
{
    int a;
    printf("%3d%3d\n", *x,y);
    a=3;
    printf("%3d%3d\n", a,b);
    *x=7; y=8;
    tricky2(&a,y);
}
void tricky2(int *x, int y)
{
    int b;
    printf("%3d%3d\n", *x,y);
    b=6;
    printf("%3d%3d\n", a,b);
}