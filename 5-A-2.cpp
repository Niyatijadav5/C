#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter value a:");
	scanf("%d",&a);
	printf("Enter value b:");
	scanf("%d",&b);
	//Swap without using temporary variable
	a=a+b;
	b=a-b;
	a=a-b;
	printf("a=%d\nb=%d",a,b);
	/*swap using a temporary variable
	int temp=a;
	a=b;
	b=temp;
	printf("a=%d\nb=%d",a,b);*/
	return 0;
}
