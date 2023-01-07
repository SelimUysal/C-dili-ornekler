/* Write a program that inputs the size of an array (n<=100) and n elements into an array.
 * Find the average and o/p the elements above this average. */

 #include <stdio.h>
 #define SIZE 100

 int main()
 {
     int n, i;
     float arr[SIZE], sum, avg;

     printf("Enter size of array: ");
     scanf("%d", &n);
     printf("Enter %d values:\n", n);
     sum = 0;
     for (i = 0; i < n; ++i)
     {
         scanf("%f", &arr[i]);
         sum += arr[i];
     }
     avg = sum / n;
     printf("Values above average are: \n");
     for (i = 0; i < n; i++)
        if (arr[i] > avg)
            printf("%7.2f\n", arr[i]);
    
    return (0);
 }