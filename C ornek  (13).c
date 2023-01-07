#include <stdio.h>

int main(){

    int n_std, i;

    printf("Number of student: ");
    scanf("%d", &n_std);

    int st_id[n_std];
    double scores[n_std];

    for( i = 0; i < n_std ; i++ ){
        printf("Enter the student id:");
        scanf("%d", &st_id[i]);

        printf("Enter the score:");
        scanf("%lf", &scores[i]);
    }
    printf("Students that their grades between 70 - 80:");
    for( i = 0; i < n_std ; i++ ){
           if(scores[i]>=70 && scores[i]<=80){
                printf(" %d", st_id[i]);
           }
    }
    return 0;
}
