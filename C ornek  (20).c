#include <stdio.h>
#define n 4

int main(){

    double unit[n][n];
    int i, j;

    for(i=1;i<=3;++i){
        for(j=1;j<=3;++j){
            unit[i][j] = 0.0;
            if(i==j){
                unit[i][j] = 1.0;
            }
        }
    }
    printf("Unit matrix\n");

    for(i=1;i<=3;++i){
        for(j=1;j<=3;++j){
                printf("%3.0lf", unit[i][j]);
        }
        printf("\n");
    }

    return 0;
}
