#include <stdio.h>
void transpose(int arr[4][4]);
int main(){

    int matrix[4][4], i, j;

    printf("Enter a matrix:\n");
    for(i=0; i<4; i++){  //row
        for(j=0; j<4; j++){  //column
                scanf("%d", &matrix[i][j]);
        }
    }
    transpose(matrix);

    return 0;
}

void transpose(int arr[4][4]){
    int i,j;
    printf("Transpose matrix:\n");
    for(i=0; i<4 ;i++){   //row
        for(j=0; j<4; j++){  //column
            printf("%d ", arr[j][i] );
        }
        printf("\n");
    }

}
