//Demonstrate int, float, double and char pointer.
#include<stdio.h>
int main()
{
	int a,*p;
	float b,*fp;
	char c,*cp;
	double d,*dp;
	
	printf("Enter integer number:");
	scanf("%d",&a);
	printf("Enter float number:");
	scanf("%f",&b);
	printf("Enter character:");
	scanf(" %c",&c);
	printf("Enter double:");
	scanf("%lf",&d);
	
	p=&a;
	fp=&b;
	cp=&c;
	dp=&d;
	
	printf("int value=%d\naddress=%d\n",*p,p);
	printf("float value=%f\naddress=%d\n",*fp,fp);
	printf("char value=%c\naddress=%d\n",*cp,cp);
	printf("double value=%lf\naddress=%d\n",*dp,dp);
	
	return 0;
}
