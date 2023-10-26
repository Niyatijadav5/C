//Perform Addition, Subtraction, Multiplication and Division of 2 numbers as per user’s choice using switch.
#include <stdio.h>
int main()
{

	float a, b;
	char choice;
	
	printf("enter choice:");
	scanf(" %c", &choice);
	
	printf("enter value:");
	scanf("%f", &a);
	
	printf("enter value:");
	scanf("%f", &b);
	
	switch (choice)
	{
	case '+':
		printf("addition:%f", a+b);
		break;
	case '-':
		printf("substraction:%f", a-b);
		break;
	case '*':
		printf("multiply:%f", a*b);
		break;
	case '/':
		if (b == 0)
		{
			printf("error");
		}
		else
		{
			printf("division:%f", a/b);
		}
		break;
	default:
		printf("invalid");
	}
	return 0;
}
