#include <stdio.h>
void silly(int x);
int a = 33;
int main(void){


    int x = 10, y = 5;
    printf("%d %d %d\n", x, y, a);
    silly(x);
    printf("%d %d %d\n", x, y, a);
    silly(y);
    printf("%d %d %d\n", x, y, a);

return(0);
}//end of the main function


void silly(int x)
{
    int y;
    y = x + 2;
    x = x * 3;
    a = a - 10;
printf("%d %d %d\n", x, y, a);
}