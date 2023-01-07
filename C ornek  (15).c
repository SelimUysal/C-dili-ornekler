#include <stdio.h>

int main(){

    int N , i, j ;

    do{
        printf("Enter the number of integers (1-30): ");
        scanf("%d", &N);
    }while(N>30 || N<1);

    int A[N];

    for(i=0;i<N;i++){
        do{
            printf("Enter an integer (1-100): ");
            scanf("%d", &A[i]);
        }while(A[i]>100 || A[i]<1);
    }
    int B[N];
    int flag, occur, cIndex=0;
    for( i=0 ; i<N ; i++){
        flag=0;
        for( j=0; j<N; j++){
            if( A[i] == B[j]){
                    flag = 1;
            }
        }
        if(flag==0){
            occur = checkArray(A, N, A[i]);
            printf("%d occurs %d times.\n", A[i], occur);
            B[cIndex] = A[i];
            cIndex++;
        }
    }

    return 0;
}

int checkArray(int a[], int size, int value){
    int i, count = 0;
    for(i=0; i<size; i++){
        if(a[i] == value){
            count++;
        }
    }
    return count;
}
