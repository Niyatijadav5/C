#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,d,r1,r2;
	printf("Enter coefficient a:");
	scanf("%f",&a);
	printf("Enter coefficient b:");
	scanf("%f",&b);
	printf("Enter coefficient c:");
	scanf("%f",&c);
	d=b*b-4*a*c;
	if(d>0)
	{
		r1=-b+sqrt(d)/(2*a);
		r2=-b-sqrt(d)/(2*a);
		printf("real roots=%f,%f",r1,r2);
	}
	else if(d==0)
	{
		r1=-b/(2*a);
		r1=-b/(2*a);
		printf("Roots are equal=%f,%f",r1,r2);	
	}
	else
	{
		printf("Roots are imaginary");
	}
	return 0;
}
