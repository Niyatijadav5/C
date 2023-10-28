//Read values in two-dimensional array and print them in matrix form.
#include<stdio.h>
int main()
{
	int rows,cols,i,j;
	
	printf("Enter size of rows:");
	scanf("%d",&rows);
	printf("Enter size of cols:");
	scanf("%d",&cols);
	
	int arr[rows][cols];

    for(i=0;i<rows;i++)
    {
    	for(j=0;j<cols;j++)
    	{
    		scanf("%d",&arr[i][j]);
		}
	}
	
	for(i=0;i<rows;i++)
    {
    	for(j=0;j<cols;j++)
    	{
    		printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
