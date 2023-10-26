//Find whether the given number is prime or not using flag.
#include<stdio.h>
int main()
{
	int num,n,i,prime=0;
	
	printf("Enter a number: ");
	scanf("%d",&num);
	
	while(i<=num/2)
	{
		if(num%i==0)
		{
		 prime++;
		}		
	}
	if(prime==2)
	{
		printf("%d is a prime number");
	}
	else
	{
		printf("%d is not a prime number");
	}
	return 0;
}
