#include<stdio.h>
int main()
{
	float side1,side2,side3;
	printf("Enter side1:");
	scanf("%f",&side1);
	printf("Enter side2:");
	scanf("%f",&side2);
	printf("Enter side3:");
	scanf("%f",&side3);
	if(side1==side2&&side2==side3&&side1==side3)
	{
		printf("equilateral triangle");
	}
	else if(side1==side2||side2==side3||side1==side3)
	{
		printf("The triangle is an isosceles triangle");
	}
	else if(side1*side1+side2*side2==side3*side3||side2*side2+side3*side3==side1*side1||side1*side1+side3*side3==side2*side2)
	{
		printf("The triangle is right angle triangle");
	}
	else
	{
		printf("scalene triangle");
	}
	return 0;
}
