#include <stdio.h>

struct compute{
    double num1;
    double num2;
    char op;
    double res;
};

int main(){
    struct compute nums;
    printf("Enter the numbers: ");
    scanf("%lf %lf", &nums.num1, &nums.num2);
    printf("Enter the operation: ");
    scanf(" %c", &nums.op);
    if(nums.op=='+')
        nums.res= nums.num1 + nums.num2;
    else if(nums.op=='-')
        nums.res= nums.num1 - nums.num2;
    else if(nums.op=='*')
        nums.res= nums.num1 * nums.num2;
    else 
        nums.res= nums.num1 / nums.num2;
    printf("%.2lf%c%.2lf = %.0lf.\n",nums.num1,nums.op,nums.num2,nums.res);   
    return 0;
}
