//Swap value of two numbers using pointer.
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
	
	*p=*p+*pb;
	*pb=*p-*pb;
	*p=*p-*pb;
	
	printf("a=%d\nb=%d",*p,*pb);
	
	return 0;
}

