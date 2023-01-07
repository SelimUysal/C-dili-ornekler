#include <stdio.h>
#include <string.h>

int main(){

    char my_string[100], matrix[3][10] = {'\0'};
    int length, i, j, r=0, c=0;

    printf("Enter a string: ");
    gets(my_string);

    length = strlen(my_string);

    for(i=0; i<length ; i++){
        if(my_string[i] != ' '){
            matrix[r][c] = my_string[i];
            c++;
        }else{
            r++;
            c=0;
        }
    }
    printf("Matrix: \n");
    for(i=0; i<3 ; i++){
        for(j=0 ; j<10; j++){
            printf("%c ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
