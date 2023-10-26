//Input an integer number and check the last digit of number is even or odd.
#include<stdio.h>
int main()
{
	int num,a;
	
	printf("Enter a number:");
	scanf("%d",&num);
	
	a=num%10;
	
	if(a%2==0)
	{
		printf("Last digit %d is even",a);
	}
	else
	{
		printf("Last digit %d is odd",a);
	}
	return 0;
}
