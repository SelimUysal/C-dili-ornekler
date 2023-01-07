#include <stdio.h>
int occurenceCounter(int nums[], int length, int whichNumber)
{
	int i,counter=0;
	for(i=0;i<length;i++)
	{
		if(nums[i]==whichNumber)
		{
			counter++;
		}
	}
	return counter;
}
int main(){
   	int n,i,count,numbers[30];
   	printf("Enter the number of integers(1-30): ");
   	scanf("%d",&n);
   	for(i=0;i<n;i++)
   	{
   		printf("Enter an integer(1-100): ");
   		scanf("%d",&numbers[i]);
	}
	printf("\n");
	for(i=1;i<=100;i++)
	{
		count=occurenceCounter(numbers,n,i);
		if(count>0)
		{
			printf("%d occurs %d times.\n",i,count);
		}
	}
    return 0;
}
