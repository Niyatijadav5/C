//Find factorial of the given number.
#include<stdio.h>
int main()
{
	int i=1,n,fact=1;
	
	printf("Enter a number:");
	scanf("%d",&n);
	
	while(i<=n)
	{
		fact=fact*i;
		i++;
	}
	printf("Factorial=%d",fact);
	return 0;
}
