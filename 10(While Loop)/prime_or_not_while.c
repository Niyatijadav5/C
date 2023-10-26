//Find whether the given number is prime or not.
#include<stdio.h>
int main()
{
	int num,n,i;
	
	printf("Enter a number: ");
	scanf("%d",&num);
	
	while(i<=num/2)
	{
		if(num%i==0)
		{
		   printf("%d is not a prime");	
		}
		else
		{
			 printf("%d is  a prime");	
		}
		i++;
	}
	return 0;
}
