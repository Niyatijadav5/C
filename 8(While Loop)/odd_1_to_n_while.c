//Print odd numbers between 1 to 10 then modify 1 to n using while and do while loop.
#include<stdio.h>
int main()
{
	int i=0,n;
	
	printf("Enter a number:");
	scanf("%d",&n);
	
	while(i<=n)
	{
		if(i%2!=0)
		{
			printf("%d\n",i);
		}
		i++;
    }
	
	/*int i=0,n;
	
	printf("Enter a number:");
	scanf("%d",&n);
	
	do
	{
		if(i%2!=0)
		{
			printf("%d\n",i);
		}
		i++;
	}
	while(i<=n);*/
	return 0;
}
