#include <stdio.h>

main(){
    FILE *inp;
    char name[10];
    int id, mt1, mt2, fin;
    
    inp = fopen("input.txt", "r");
    while (!feof(inp)){
        fscanf(inp, "%d %s %d %d %d\n", &id, name, &mt1, &mt2, &fin);
        fscanf(inp, "\n");
        printf("Id=%d Name=%s Avg=%5.2f\n", id, name, 0.25*mt1+0.25*mt2+0.5*fin);
    }
    fclose(inp);
}