/* Sort 3 integers using the swap function */
#include <stdio.h>

void swap(int *, int *);
int main(void)
{
    int n1, n2, n3;

    printf("Enter 3 integers: ");
    scanf("%d %d %d", &n1, &n2, &n3);
    if (n1 > n2)
        swap(&n1, &n2);
    if (n1 > n3)
        swap(&n1, &n3);
    if (n2 > n3)
        swap(&n2, &n3);
    printf("%d %d %d are sorted\n", n1, n2, n3);
}

void swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}