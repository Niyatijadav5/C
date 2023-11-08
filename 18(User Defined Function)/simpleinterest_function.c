//Count simple interest using function.
#include<stdio.h>
float si(float p,float r,int t)
{
	float ans;
	
	ans=(p*r*t)/100;
	
	return ans;
};
int main()
{
	float p,r,interest;
	int t;
	
	printf("Enter principal amount:");
	scanf("%f",&p);
	printf("Enter rate of interest:");
	scanf("%f",&r);
	printf("Enter time:");
	scanf("%d",&t);
	
	interest=si(p,r,t);
	
	printf("Simple interst=%f",interest);
	
	return 0;
}
