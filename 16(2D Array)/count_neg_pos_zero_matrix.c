//Count number of positive, negative and zero elements from 3 X 3 matrix.
#include<stdio.h>
int main()
{
	int i,j,pos=0,neg=0,zero=0;
	int arr[3][3];
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d",arr[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(arr[i][j]<0)
			{
				neg++;
			}
			else if(arr[i][j]>0)
			{
				pos++;
			}
			else
			{
				zero++;
			}
		}
	}
	printf("positive=%d\nnegative=%d\nzero=%d\n",pos,neg,zero);
	return 0;
}
