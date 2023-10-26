//Print 1 to 10 then modify program Print 1 to n using while and do while loop.
#include<stdio.h>
int main()
{
//	int i=1;                        //Print 1 to 10

//	while(i<=10)
//	{
//		printf("%d\n",i);
//		i++;
//	}	
	
	
	int i=1,n;                              //Print 1 to n using while
	
	printf("Enter a number:");
	scanf("%d",&n);
	
	while(i<=n)
	{
		printf("%d\n",i);
		i++;
	}
	return 0;
}
