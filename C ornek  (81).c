/*  Functions with input arguments that have return value */
/*  input the positive integer in the main program. In the function, evaluate factorial and display the result in main program
 */

# include <stdio.h>
int factorial(int );

int main () {

int num, fact_main; char ans;
do{
        printf("Enter a positive integer\n");
scanf("%d",&num);
    fact_main=factorial(num);
    printf("The calculated factorial value = %d", fact_main);
    printf("Do you want to continue");
    scanf(" %c",&ans);
    }while ((ans=='y')||(ans=='Y'));

    scanf("%d",&num);

    return 0;
}

int factorial(int number){

int i,fact=1;
char new_line;

for(i=number;i>1; i--)

    fact=fact*i;
return (fact);



}
