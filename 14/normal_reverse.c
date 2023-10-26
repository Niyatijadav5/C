//Read n numbers from user and print in normal and reverse order.
#include<stdio.h>
int main()
{
	int n;
	printf("Enter an array element:");
	scanf("%d",&n);
	int arr[n],i;
	
	for(i=0;i<n;i++)
	{
		printf("Enter element:");
		scanf("%d",&arr[i]);
	}
	printf("Normal order\t\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);	
	}
	printf("Reverse order\t\n");
	for(i=n-1;i>=0;i--)
	{
		printf("%d\n",arr[i]);
	}
}
