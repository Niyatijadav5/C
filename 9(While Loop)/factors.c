//Find factors of the given number.
#include<stdio.h>
int main()
{
	int i=1,n;
	
	printf("Enter a number:");
	scanf("%d",&n);
	
	while(i<=n)
	{
		if(n%i==0)
		{
			printf("%d\n",i);
		}
		i++;
	}
	return 0;
}
