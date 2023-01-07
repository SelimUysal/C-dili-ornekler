#include<stdio.h>

int main(){
    int N,i,del,j=0;

    do{
        printf("Enter the array size (1-30): ");
        scanf("%d", &N);
    }while(N>30 || N<1);

    int x[N];
    int y[N];

    printf("Enter %d integer: ", N);
    for(i=0;i<N;i++){
        scanf("%d", &x[i]);
    }

    printf("Enter an integer: ");
    scanf("%d", &del);



    for(i=0;i<N;i++){
        if(x[i]== del){
            continue;
        }else{
            y[j] = x[i];
            j++;
        }
    }

    printf("New array: ");
    for(i=0;i<N;i++){
        printf("%d ", y[i]);
    }


    return 0;
}
