//Get a number as a string from user and convert string to integer, string to float as per user’s choice.
#include <stdio.h>
#include <stdlib.h>
int main()
{
	char x[10];
	int convert1;
	float convert2;
	
	printf("Enter value of c : ");
	scanf("%s",x);

	convert1 = atoi(x);
	printf("integer %d\n",convert1);
	
	convert2 = atof(x);
	printf("floating part %f",convert2);
	return 0;
}

