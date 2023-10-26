//Find factorial of the given number.
#include<stdio.h>
int main()
{
	int i,n,sum;
	
	printf("Enter a number:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		sum=sum*i;
	}
	printf("%d",sum);
	return 0;
}
