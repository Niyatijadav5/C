//Print average of three numbers
#include<stdio.h>
int main()
{
	float a,b,c,avg;
	
	printf("Enter a number:\n");
	scanf("%f",&a);
	
	printf("Enter a number:\n");
	scanf("%f",&b);
	
	printf("Enter a number:\n");
	scanf("%f",&c);
	scanf("%f%f%f",&a,&b,&c);
	
	avg=(a+b+c)/3;
	
	printf("avg=%f",avg);
	
	return 0;
}