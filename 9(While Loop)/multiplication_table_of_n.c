//Print multiplication table of a given number.
#include<stdio.h>
int main()
{
	int i=1,n,ans;
	
	printf("Enter a number:");
	scanf("%d",&n);
	
	while(i<=10)
	{
	    ans=n*i;
		printf("%d*%d=%d\n",n,i,ans);
		i++;
	}
	return 0;
}
