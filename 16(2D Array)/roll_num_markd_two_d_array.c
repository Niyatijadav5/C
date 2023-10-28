//Read and store the roll no and marks of 20 students using 2D array.
#include<stdio.h>
int main()
{
	int i,j;
	int arr[20][2];
	
	printf("Enter roll no. and marks:");
	
	for(i=0;i<20;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	
	printf("rollno.\tmarks\n");
	for(i=0;i<20;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
