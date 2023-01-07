/*  Functions with input arguments that no return value */
/*  input the positive integer in the main program. In the function, evaluate factorial and display the result
Do not return the results to the main program */

# include <stdio.h>
void factorial(int );

int main () {

int num; char ans;
do{
        printf("Enter a positive integer\n");
scanf("%d",&num);
    factorial(num);
    printf("Do you want to continue");
    scanf(" %c",&ans);
    }while ((ans=='y')||(ans=='Y'));

    scanf("%d",&num);

    return 0;
}

void factorial(int number){

int i,fact=1;
char new_line;

for(i=number;i>1; i--)

    fact=fact*i;
printf("The calculated factorial value = %d", fact);


}
