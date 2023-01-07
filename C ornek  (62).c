
/* Passing Arrays to Functions:
 * 1) passing an element of an array */
/* Determine if an array element is even */

#include <stdio.h>

int even(int);

int main()
{
    int arr[10], i;

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
        if (even(arr[i]))
            printf("%d is even ", arr[i]);
        else
            printf("%d is odd ", arr[i]);
    }
}

int even(int a)
{
    if (a % 2 == 0)
        return(1);
    else
        return(0);
}