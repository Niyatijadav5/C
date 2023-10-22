//Print area of triangle. ((height*base)/2)
#include<stdio.h>
int main()
{
	float b,h,area;
	
	printf("Enter base of triangle");
	scanf("%f",&b);
	
	printf("Enter height of triangle");
	scanf("%f",&h);
	
	area=(b*h)/2;
	
	printf("area=%2f",area);
	
	return 0;
}
