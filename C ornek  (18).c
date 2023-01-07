#include<stdio.h>

int main(){
    int N,i,del,del_index=-1;

    do{
        printf("Enter the array size (1-30): ");
        scanf("%d", &N);
    }while(N>30 || N<1);

    int x[N];

    printf("Enter %d integer: ", N);
    for(i=0;i<N;i++){
        scanf("%d", &x[i]);
    }

    printf("Enter an integer: ");
    scanf("%d", &del);

    printf("New array: ");

    for(i=0;i<N;i++){
        if(x[i]==del){
            del_index = i;
            break;
        }else{
            for(i=0;i<N;i++){
                printf("%d ", x[i]);
            }
        }
    }

    if(del_index == N-1){
        for(i=0;i<N-1;i++){
            printf("%d ", x[i]);
        }
    }else if(del_index>=0 && del_index<=N-2){
        for(i=del_index; i<N-1;i++){
            x[i]=x[i+1];
        }
        for(i=0;i<N-1;i++){
            printf("%d ", x[i]);
        }
    }

    return 0;
}
