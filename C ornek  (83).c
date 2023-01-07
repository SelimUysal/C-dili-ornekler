#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char name[31];
	int grade1,grade2,grade3;
	double average;
	
	printf("Enter student's name: ");
	gets(name);
	printf("Enter the first grade: ");
	scanf("%d",&grade1);
	
	printf("Enter the second grade: ");
	scanf("%d",&grade2);
	
	printf("Enter the third grade: ");
	scanf("%d",&grade3);
	
	average=(grade1+grade2+grade3)/3.0;
	
	printf("%s, your average is: %f\n",name,average);
	
	system("PAUSE");
	return 0;
}
