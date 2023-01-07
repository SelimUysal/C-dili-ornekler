#include <stdio.h>

int main(void)
{
int x = 3;
int *ptr = &x;

printf("%d\n", *ptr);
printf("%d\n", ptr);
printf("%p\n", ptr);
printf("%p\n", &x);

int y;

y = *ptr;
y = *ptr + 1;
*ptr = 0;
*ptr += 2;

printf("%d %d %d\n", y, *ptr, x);
return(0);
}