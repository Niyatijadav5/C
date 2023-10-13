#include<stdio.h>
int main()
{
	float marks;
	printf("Enter marks:");
	scanf("%f",&marks);
	if(marks>70)
	{
		printf("Distinction");
	}
	else if(marks>60&&marks<=70)
	{
		printf("First class");
	}
	else if(marks>45&&marks<=60)
	{
		printf("Second class");
	}
	else if(marks>35&&marks<=45)
	{
		printf("Pass");
	}
	else
	{
		printf("Fail");
	}
	return 0;
}
