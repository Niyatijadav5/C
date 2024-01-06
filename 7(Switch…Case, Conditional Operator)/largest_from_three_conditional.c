//Find out largest number from given 3 numbers using conditional operator.
#include <stdio.h>
int main()
{
	int a,b,c,largest;
	
	printf("Enter three number:");
	scanf("%d",&a);
	
	printf("Enter three number:");
	scanf("%d",&b);
	
	printf("Enter three number:");
	scanf("%d",&c);
	
	
	largest = a>b ? (a>c ? a : c):(b>c ? b : c);
	
	printf("%d is largest number", largest);
	
	return 0;
}

