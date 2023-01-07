
/* Passing Arrays to Functions:
 * 2) passing the whole array */
/* Write a function to find the sum of an array. */

#include <stdio.h>

int sumarr(int [], int);

main()
{
    int arr1[] = {7, 9, 11};

    printf("sum of array = %d\n", sumarr(arr1, 3));
}

int sumarr (int x[], int length)
{
    int sum = 0, i;

    for (i = 0; i < length; i++)
        sum += x[i];
    
    return(sum);
}