/* Write a program that inputs size of array (n <= 50) and n integers into an array.
 * Then generate 2 arrays, one from the even elements and the other from the odd elements in the array. */

#include <stdio.h>
#define MAX 50

int main()
{
    int nums[MAX], odds[MAX], evens[MAX];
    int n, i, oddcnt = 0, evencnt = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter %d elements", n);
    for (i = 0; i < n; i++)
        scanf("%d", &nums[i]);
    
    for (i = 0; i < n; i++)
    {
        if (nums[i] % 2 == 0)
            evens[evencnt++] = nums[i];
        else odds[oddcnt++] = nums[i];
    }
    printf("Odd elements: ");
    for (i = 0; i < oddcnt; i++)
        printf("%4d", odds[i]);
    printf("Even elements: ");
    for (i = 0; i < evencnt; i++)
        printf("%4d", evens[i]);
}