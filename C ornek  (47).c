#include <stdio.h>

int total_n(int x);
int main(void){
    printf("The total of numbers is %d\n", total_n(10));
    return 0;
}
int total_n(int x){
    int i, total = 0;
    for (i = 1; i <= x; i++)
        total += i;
    return total;
}