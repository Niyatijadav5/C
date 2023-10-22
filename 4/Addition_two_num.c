//Print addition of 2 numbers. (with & without scanf)
#include<stdio.h>
int main()
{
	int sum,a,b;
	
	printf("Enter a number:");
	scanf("%d",&a);
	
	printf("Enter a number:");
	scanf("%d",&b);
	
	sum=a+b;
	
	printf("addition=%d",sum);
	
	return 0;
}
