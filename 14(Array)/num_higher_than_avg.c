//Count numbers higher than the average of an array.
#include<stdio.h>
int main()
{
	int n,i,sum=0;
	float avg=0;
	
	printf("Enter value of number:");
	scanf("%d",&n);
	
	int arr[i];
	
	for(i=0;i<n;i++)
	{
		printf("Enter number:");
		scanf("%d",&arr[i]);
		sum=sum+arr[i];	
	}
	
	avg=(float)sum/n;
	
	for(i=0;i<n;i++)
	{
		if(arr[i]>avg)
		{
		    printf("Numbers higher than average=%d\n",arr[i]);
		}
	}
    return 0;
}
