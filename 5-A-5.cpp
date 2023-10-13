#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter a number: ");
	scanf("%d",&a);
	printf("Enter a number: ");
	scanf("%d",&b);
	printf("Enter a number: ");
	scanf("%d",&c);
	int largest=a;
	if(b>largest)
	{
		largest=b;
	}
	if(c>largest)
	{
		largest=c;
	}
	printf("the largest number is:%d",largest);
	return 0;
}
