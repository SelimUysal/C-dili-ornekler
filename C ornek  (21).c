#include <stdio.h>

int main(){

    int arr[5][5]={{1,2,3,2,1},{1,2,0,2,1},{1,0,0,0,1},{1,2,0,2,1},{1,2,3,2,1}};
    int i, j;

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            if(arr[i][j]==0){

                printf("  ");
            }else{
                printf("%d ", arr[i][j]);
            }
        }
        printf("\n");
    }


    return 0;
}
