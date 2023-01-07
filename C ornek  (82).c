#include<stdio.h>
#define conversion_rate 9.55
int main()
{
	int dollar;
	double tl;
	printf("ENTER DOLLAR AMOUNT: ");
	scanf("%d",&dollar);
	tl=conversion_rate*dollar;
	printf("VOW!! %d DOLLAR MAKES %10.3f TURKISH LIRAS\n",dollar,tl);
	return 0;
}
