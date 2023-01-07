#include <stdio.h>
main(){
    FILE *nums, *ops, *res;
    int i, j;
    char ch;

    nums = fopen("numbers.txt", "r");
    ops = fopen("operations.txt", "r");
    res = fopen("result.txt", "w");
    while (!feof(nums) && !feof(ops)){
        fscanf(nums,"%d %d",&i,&j);
        fscanf(ops,"%c",&ch);
        fscanf(ops,"\n");
        switch (ch){
            case '+': fprintf(res,"%d+%d=%d\n",i,j,i+j); break;
            case '-': fprintf(res,"%d-%d=%d\n",i,j,i-j); break;
            case '*': fprintf(res,"%d*%d=%d\n",i,j,i*j); break;
        }
    }
    fclose(nums); fclose(ops); fclose(res);
}