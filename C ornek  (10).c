#include<stdlib.h>
#include<math.h>
#include<stdio.h>

double distance(double a[], double b[], int n){

	int i;
	double sum=0;
	for(i=0;i<n;i++)
		sum=sum+(a[i]-b[i])*(a[i]-b[i]);

	return (sqrt(sum));
}

int main(){

	int N,i;
	double d;

	printf("Enter vector size: ");
	scanf(" %d",&N);

	double X[N],Y[N];

	printf("Enter X vector: ");
	for(i=0;i<N;i++)
		scanf("%lf", &X[i]);

	printf("Enter Y vector: ");
	for(i=0;i<N;i++)
		scanf("%lf", &Y[i]);

    d = distance(X,Y,N);

	printf("Distance is %.2f\n",d);

	return 0;
}
