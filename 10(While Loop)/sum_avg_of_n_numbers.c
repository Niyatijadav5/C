//Find the sum and average of different numbers which are accepted by user as many as user wants.
#include<stdio.h>
int main()
{
	int num,sum=0,i=0,n;
	float avg;
	
	printf("Enter how many number you want:");
	scanf("%d",&n);

	while(i<n)
	{
		printf("\nEnter number one by one:"); 
		scanf("%d",&num);
		
		sum=sum+num;
		i++;
	}
	avg=sum/n;
	
	printf("\nSum of number=%d",sum);
	
	printf("\naverage of numbers=%f",avg);
	return 0;
}
