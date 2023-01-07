#include<stdio.h>
#include<stdlib.h>
#define PI 3.14

int main()
{
	int radius;
	double diameter,circumference;
	
	printf("Input the radius: ");
	scanf("%d",&radius);
	
	diameter=2*radius;
	circumference=2*PI*radius;
	
	printf("Diameter = %.1lf\n",diameter);
	printf("Circumference = %.1lf\n",circumference);
	
	system("pause");
	return 0;
}
