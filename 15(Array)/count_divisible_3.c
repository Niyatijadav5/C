//Count number of elements divisible by 3 in array.
#include<stdio.h>
int main()
{
	int n,div=0,i;
	
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
		if(arr[i]%3==0)
		{
			div++;
		}
	}
	printf("divisible by 3=%d",div);
	return 0;
}
