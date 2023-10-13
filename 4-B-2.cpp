#include<stdio.h>
int main()
{
	float principal,roi,time,simpleinterest;
	printf("Enter the principal amount:");
	scanf("%f",&principal);
	printf("Enter the rate of interest:");
	scanf("%f",&roi);
	printf("Enter the time period:");
	scanf("%f",&time);
	simpleinterest=(principal*roi*time)/100;
	printf("simple interest=%f",simpleinterest);
	return 0;
}
