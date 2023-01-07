#include <stdio.h>

int main(){
    int arr[10], i, flag;


    printf("Enter 10 integer: ");
    for( i = 0 ; i < 10 ; i++ ){
        scanf("%d", &arr[i]);
    }

    for( i = 0 ; i < 9 ; i++){
        if(arr[i] <= arr[i+1]){
            flag = 1;
        }else{
            flag = 0;
            break;
        }
    }

    if(flag == 1)
        printf("Ascending Order\n");
    else
        printf("NOT ascending order\n");

    printf("Array: ");
    for( i = 0 ; i < 10 ; i++ ){
        printf(" %d", arr[i]);
    }

    return 0;
}
