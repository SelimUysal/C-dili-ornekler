#include <stdio.h>

struct compute{
    double num1;
    double num2;
    char op;
    double res;
};

int main(){
    int i;
    struct compute nums[10];
    for(i=0; i<10; i++){
        printf("Enter the numbers: ");
        scanf("%lf %lf", &nums[i].num1, &nums[i].num2);
        printf("Enter the operation: ");
        scanf(" %c", &nums[i].op);
        if(nums[i].op=='+')
            nums[i].res= nums[i].num1 + nums[i].num2;
        else if(nums[i].op=='-')
            nums[i].res= nums[i].num1 - nums[i].num2;
        else if(nums[i].op=='*')
            nums[i].res= nums[i].num1 * nums[i].num2;
        else 
            nums[i].res= nums[i].num1 / nums[i].num2;
    }
    for(i=0; i<10; i++){
        printf("%.2lf%c%.2lf = %.0lf.\n",nums[i].num1,nums[i].op,nums[i].num2,nums[i].res);
    }
    return 0;
}
