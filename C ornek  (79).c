/*  Functions without arguments that have return value */
/*  write a program that will input positive integer numbers in the factorial function,
compute factorial of the input integer but do not display the result in the function
. Instead return the result the main program */

# include <stdio.h>
int factorial(void);

int main () {

int num; char ans; int fact_main;
do{
    fact_main=factorial();
     printf("The calculated factorial value = %d", fact_main);
    printf("Do you want to continue");
    scanf(" %c",&ans);
    }while ((ans=='y')||(ans=='Y'));

    scanf("%d",&num);
    printf("The calculated factorial value = %d", fact_main);
    return 0;
}

int factorial(void){

int i, n,fact=1;
char new_line;
printf("Enter a positive integer\n");
scanf("%d",&n);
for(i=n;i>1; i--)

    fact=fact*i;


return (fact);
}
