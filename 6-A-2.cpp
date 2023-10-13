#include<stdio.h>
int main()
{
	float bs,hra,da,gs;
	printf("Enter the basic salary:");
	scanf("%f",&bs);
	if(bs>=30000)
	{
		hra=bs*0.3;
		da=bs*0.95;
	}
	else if(bs>=20000)
	{
		hra=bs*0.25;
		da=bs*0.9;
	}
	else if(bs>=10000)
	{
		hra=bs*0.2;
		da=bs*0.8;
	}
	else
	{
		hra=bs*0.15;
		da=bs*0.7;
	}
	gs=bs+hra+da;
	printf("GrossSalary=%f",gs);
	return 0;
}
