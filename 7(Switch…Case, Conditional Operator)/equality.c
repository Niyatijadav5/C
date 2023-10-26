//Check for equality of two numbers without using arithmetic or comparison operator.
#include<stdio.h>
int main()
{
	int num1,num2;
	
	printf("Enter number : ");
	scanf("%d",&num1);
	
	printf("Enter number : ");
	scanf("%d",&num2);
	
	if(!(num1^num2))
	{
		printf("Equal");
	}
	else
	{
		printf("Not equal");
	}
	return 0;
}

