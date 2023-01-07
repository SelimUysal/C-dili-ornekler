#include <stdio.h>
int smile(int x);
int a = 3;
int main(void)
{


    int x = 10, y = 5, a = 4;
    a++;
    printf("%d %d %d\n", x, y, a);
    y = smile(y);
    printf("%d %d %d\n", x, y, a);
getchar();
getchar();
return(0);
} /* end of the main function */


int smile(int x)
{
    int y = 2;
    x = x * 3;
    a = a - 1;
printf("%d %d %d\n", x, y, a);
return(y);
}