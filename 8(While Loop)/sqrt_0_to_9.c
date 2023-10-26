//Print number and its square root for 0 to 9
#include<stdio.h>
#include<math.h>
int main()
{
	int i=0;
	
	printf("Number\tSquare root\n");
	
	while(i<=9)
	{
		printf("%d\t%f\n",i,sqrt(i));
		i++;
	}
	return 0;
}
