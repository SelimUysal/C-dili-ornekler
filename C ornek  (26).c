//ex_10_11
#include <stdio.h>
#define LENGTH 15
int main(){
    int i, j;
    char name1[LENGTH], name2[LENGTH];

    printf("Enter a name: ");
    fgets(name1, LENGTH, stdin);

    printf("Enter a name: ");
    fgets(name2, LENGTH, stdin);

    printf("Common characters: ");

    for(i=0; i<LENGTH; i++){
        for(j=0; j<LENGTH; j++){
            if(name1[i]==name2[j]){
                printf("%c ", name1[i]);
            }
        }
    }

    return 0;
}
