//Print temperature from Fahrenheit to Celsius. (Formula: c=(((f-32)*5))/9)
#include<stdio.h>
int main()
{
	float f,celsius;
	
	printf("Enter the temperature in Fahrenheit:");
	scanf("%f",&f);
	
	celsius=((f-32)*5)/9;
	
	printf("Temperature in celsius=%f",celsius);
	
	return 0;
}
