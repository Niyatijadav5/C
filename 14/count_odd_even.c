//Count number of even or odd number from an array of n numbers.
#include<stdio.h>
int main()
{
	int n;
	printf("Enter array element:");
	scanf("%d",&n);
	int i,even=0,odd=0,arr[n];
	for(i=0;i<n;i++)
	{
		printf("Enter a number:");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		{
			even++;
		}
		else
		{
			odd++;
		}
		
	}
	printf("even=%d\nodd=%d\n",even,odd);
	return 0;
}
