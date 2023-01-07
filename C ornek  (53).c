/* Write a function to compute the cost for carpeting a room.
 * Input should consist of the room length, width and 
 * carpet price per square meter. main program should input the values,
 * call the function and function will return the total cost by parameter. */

#include <stdio.h>

void carpet(int l, int w, double p, double *total)
{
    *total = w * l * p;
}

int main()
{
    int len, wid; double price, cost;
    
    printf("Enter length, width and price: ");
    scanf("%d %d %lf", &len, &wid, &price);
    carpet(len, wid, price, &cost);
    printf("Total cost is %f\n", cost);
    
    return (0);
}