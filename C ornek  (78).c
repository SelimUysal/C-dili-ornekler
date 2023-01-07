/*  Functions without arguments that return no value */
/*  write a program that will input positive integer numbers and find factorial.
 User should continue to input if his/her request is y/n.
Factorial should be evaluated by using a function */

# include <stdio.h>
void factorial(void);

int main () {

int num; char ans;
do{
    factorial();
    printf("Do you want to continue");
    scanf(" %c",&ans);
    }while ((ans=='y')||(ans=='Y'));

    scanf("%d",&num);
    return 0;
}

void factorial(void){

int i, n,fact=1;
char new_line;
printf("Enter a positive integer\n");
scanf("%d",&n);
for(i=n;i>1; i--)

    fact=fact*i;

printf("The calculated factorial value = %d", fact);
}
