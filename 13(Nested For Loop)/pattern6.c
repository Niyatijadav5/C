//1 
//0 1 
//0 1 0 
//1 0 1 0 
//1 0 1 0 1
#include<stdio.h>
int main()
{
	int i,j,count=0;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			count++;
			if(count%2!=0)
			{
				printf("1");
			}
			else
			{
				printf("0");
			}
		}
		printf("\n");
	}
	return 0;
}
