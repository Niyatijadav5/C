//Perform Addition, Subtraction, Multiplication and Division of 2 numbers as per user’s choice.
#include<stdio.h>
int main()
{
    float a,b;
	char choice;
	
	printf("Enter choice:");
	scanf(" %c",&choice);
	printf("Enter number a:");
	scanf("%f",&a);
	printf("Enter number b:");
	scanf("%f",&b);

	if(choice=='+')
	{
		printf("Addition=%f",a+b);
	}
	if(choice=='-')
	{
		printf("substraction=%f",a-b);
	}
	if(choice=='*')
	{
		printf("multiplication=%f",a*b);
	}
	if(choice=='/')
	{
		if(b==0)
		{
			printf("invalid");
		}
		else
		{
		printf("divison=%f",a/b);
	    }
	}
	return 0;				
}
