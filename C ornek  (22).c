#include <stdio.h>

int main(){

    int matrix[30][30], i, j, temp, n;
	//size of array
    do{
        printf("Enter a positive integer: ");
        scanf("%d", &n);
    }while(n>30 || n<=0);
	//input
    printf("Enter the matrix:(Column-wise Order)\n");
    for(i = 0; i<n; i++){
        for(j=0; j<n; j++){
            scanf("%d", &matrix[j][i]);
        }
    }
    //print matrix
    printf("The matrix (Row-wise Order:\n");
    for(i = 0; i<n; i++){
        for(j=0; j<n; j++){
            printf("%d  ", matrix[i][j]);
        } printf("\n");
    }
    //swap
    for(i = 0; i<n; i++){
        temp = matrix[i][i];
        matrix[i][i] = matrix[i][n-(i+1)];
        matrix[i][n-(i+1)] = temp;
    }
    //output swapped matrix
    printf("\nNew matrix (Row-wise Order):\n");
    for(i = 0; i<n; i++){
        for(j=0; j<n; j++){
            printf("%d  ", matrix[i][j]);
        } printf("\n");
    }

    return 0;
}
