//Print value and address of a variable.
#include<stdio.h>
int main()
{
	int a,*p;
	
	printf("Enter a number:");
	scanf("%d",&a);
	
	p=&a;
	
	printf("Value of variable=%d\n",*p);
	printf("Address of variable=%d",p);
	
	return 0;
}
