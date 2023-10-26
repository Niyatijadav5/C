//Check whether the given number is odd or even using bitwise operator.
#include<stdio.h>
int main()
{
	int num;
	
	printf("Enter a number:");
	scanf("%d",&num);
	
	if(num&1)
	{
		printf("%d is an odd number",num);
	}
	else
	{
		printf("%d is even number",num);
	}
	return 0;
}
