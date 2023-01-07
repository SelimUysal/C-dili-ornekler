#include <stdio.h>

int main(void)
{
    int *p, *q;
    int x = 5;

    p = &x;
    q = p;
    *q = 8;
    printf("%d %d\n", x, *p);
    
    (*p)++; //precedence of ++ is higher than * so paranthesize
    
    printf("%d\n", x);
    
    return(0);
}