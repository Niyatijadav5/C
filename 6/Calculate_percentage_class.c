//Read marks of five subjects.
//Calculate percentage and print class accordingly. 
//Fail below 35, Pass Class between 36 to 45, Second Class between 46 to 60, 
//First Class between 61 to 70, Distinction if more than 70.
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
