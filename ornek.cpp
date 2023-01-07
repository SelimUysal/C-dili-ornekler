#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void guess(int*number)
{
	srand(time(NULL));
	*number = rand()%100;
}
//   ;

void game (int *round, int *guess_number, int *player_number, char *status)
  {   
  int p_number;
   do
   {
   	*round=*round+1;
   	if(*guess_number<*player_number)
   	{
	do {
   	printf("Try a smaller number! \n");
    printf("Enter a number between 0 to 100");
	scanf("%d",&p_number);
	*player_number=	p_number;
	} 
	while( p_number>=99 || p_number<0);

	
	}
	if(*guess_number>*player_number)
	{	
	do
	{
	printf("Try a bigger number! \n");
	printf("Enter a number between 0 to 100");
	scanf("%d",&p_number);
	*player_number=	p_number;
	}
	while( p_number>=99 || p_number<0);

	}
	if(*guess_number==*player_number)
  {
  	*status='W';
  	break;
  }
  }
   while(*round<2);
    if(*status!='W')
    {
    	*status='L';
	}
	}

int main  ()
  	{
  		int accOUNT,amOUNT,round,guess_NUMber,player_Number;
     	char status,want;
         printf("Enter a start account for the game $: ");    scanf("%d" ,&accOUNT);

	 	do 
		 {
   round=0;
   status='0';
    printf("Enter the bet amount: ");
    scanf("%d" ,&amOUNT);
    while(accOUNT<amOUNT)
	{	
    printf("You can't bet more than your balance.\n");
    printf("Enter the bet amount: ");
    scanf("%d" ,&amOUNT);
	}
	guess(&guess_NUMber);
 	printf("tahmin ettigimiz sayı %d \n ",guess_NUMber); 
 	do {
 	printf("Enter a number between 0 to 100: ");
	scanf("%d",&player_Number);
    }while( player_Number>=99 || player_Number<0);

	  game (&round, &guess_NUMber,&player_Number, &status);

  if (status=='W')
{
  printf("You win the game! The number was %d.\n",guess_NUMber);
  accOUNT=accOUNT+amOUNT;
printf("Your account is %d$\n ",accOUNT);
}
  if ( status=='L')
  {
  printf("You lost the game! The number was %d.\n",guess_NUMber);
  accOUNT=accOUNT-amOUNT;
printf("Your account is %d$\n ",accOUNT);
}
 if (accOUNT==0){
   printf("You lost your all money!\n");
  	break;
 }
	printf("Do you want to play again? ");
	scanf("  %c",&want);

   }while (want=='Y' || want=='y' );
  	printf("Thank you for playing. See you next time!");

  		return 0; 
	}


