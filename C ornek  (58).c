/* Read an unknown # of one-digit integers and find how many times each occurs.
 * Stop when -99 is read */

#include <stdio.h>

int main()
{
    int count[10] = {0}, i;

    printf("Enter 1-digit integers ending with -99 ");
    scanf("%d", &i);
    while (i != -99)
    {
        count[i]++;
        scanf("%d", &i);
    }
    for (i = 0; i < 10; i++)
        if (count[i] > 0)
            printf("%d occured %d times\n", i, count[i]);
}