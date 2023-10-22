//Swap two numbers. (Using temporary variable and without using temporary variable)
#include<stdio.h>
int main()
{
	int a,b;
	
	printf("Enter value a:");
	scanf("%d",&a);
	
	printf("Enter value b:");
	scanf("%d",&b);
	
    a=a+b;                                   //Swap without using temporary variablea=a+b;
	b=a-b;
	a=a-b;
	printf("a=%d\nb=%d",a,b);
	
	
//	int temp=a;                             //swap using a temporary variable
//	a=b;
//	b=temp;
//	printf("a=%d\nb=%d",a,b);*/
	
	return 0;
}
