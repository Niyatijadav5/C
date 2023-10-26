//Print multiplication table of a given number.
#include<stdio.h>
int main()
{
	int i,n,ans;
	
	printf("Enter a number:");
	scanf("%d",&n);
	
	for(i=1;i<=10;i++)
	{
		ans=n*i;
		printf("%d*%d=%d\n",n,i,ans);
	}
	return 0;
}
