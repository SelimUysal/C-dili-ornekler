
#include <stdio.h>

void change (int [], int);

main()
{
    int one[] = {3, 5, 7}, i;

    change(one, 3);
    for (i = 0; i < 3; i++)
        printf("%d ", one[i]);
}

void change(int xarr[], int s)
{
    int i;
    for (i = 0; i < s; i++)
        xarr[i]++;
}