//Multiply and divide a number by 2 without using multiplication/division operator.
#include<stdio.h>
int main()
{
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	
	int multiply=num<<1;
	printf("Multiplication=%d",multiply);
	
	/*int divison=num>>1;
	printf("Divison=%d",divison);*/
	return 0;
}
