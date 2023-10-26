//Calculate the square of integers 1 through 10.
#include<stdio.h>
#include<math.h>
int main()
{
	int i=1;
	
	while(i<=10)
	{
		printf("%d\t%f\n",i,pow(i,2));
		i++;
	}
	return 0;
}
