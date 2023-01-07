
/* Declare and combine 2 integer arrays of size 10 into an array of
 * size 20 */

#include <stdio.h>

int main()
{
    int a[10], b[10], c[20], i;

    for (i = 0; i < 10; i++)
        scanf("%d", &a[i]);
    for (i = 0; i < 10; i++)
        scanf("%d", &b[i]);
    for (i = 0; i < 10; i++){
        c[2*i] = a[i];
        c[2*i+1] = b[i];
    }
    printf("Resulting array\n");
    for (i = 0; i < 20; i++)
        printf("%3d\n", c[i]);
}