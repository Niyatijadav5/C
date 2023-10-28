//Count total number of negative elements in array.
#include<stdio.h>
int main()
{
	int n,neg=0,i;
	
	printf("Enter array size:");
	scanf("%d",&n);
	
	int arr[n];
	
	printf("Enter array element:");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n;i++)
	{
		if(arr[i]<0)
		{
			neg++;
		}
	}
	printf("negative=%d",neg);
	return 0;
}
