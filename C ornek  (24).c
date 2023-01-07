#include <stdio.h>
void multiply(int A[30][30],int B[30][30],int C[30][30],int n);
int main(){

    int n, A[30][30], B[30][30], C[30][30], i,j;

    do{
        printf("Enter the size of matrix: ");
        scanf("%d", &n);
    }while(n>30 || n<=0);

    printf("Enter Matrix A: \n");
    for(i=0 ; i<n ; i++){
        for(j=0; j<n ; j++){
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter Matrix B: \n");
    for(i=0 ; i<n ; i++){
        for(j=0; j<n ; j++){
            scanf("%d", &B[i][j]);
        }
    }
    multiply(A,B,C,n);
    printf("Result Matrix C: \n");
    for(i=0 ; i<n ; i++){
        for(j=0; j<n ; j++){
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }



    return 0;
}

void multiply(int A[30][30],int B[30][30],int C[30][30],int n){
    int i,j,k;

    for(i=0 ; i<n ; i++){
        for(j=0; j<n ; j++){
        	C[i][j]=0;
        	for(k=0;k<n;k++)
        	{
        		C[i][j] += A[i][k] * B[k][j];
			}   
        }
    }

}
