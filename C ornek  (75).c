#include <stdio.h>

main(){
    int i, sum = 0;
    FILE *fptr;

    fptr = fopen("new.txt", "r");
    while(!feof(fptr)){
        fscanf(fptr, "%d", &i);
        sum+=i;
    }
    printf("sum is %d", sum);
    fclose(fptr);
}