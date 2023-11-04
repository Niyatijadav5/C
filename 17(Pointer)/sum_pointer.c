//Calculate sum of two numbers using pointer.
#include<stdio.h>
int main()
{
	int a,b,*p,*pb;
	
	printf("Enter a number:");
	scanf("%d",&a);
	printf("Enter a number:");
	scanf("%d",&b);
	
	p=&a;
	pb=&b;
	
	printf("Sum=%d",*p+*pb);
	
	return 0;
}
