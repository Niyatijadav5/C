//Find Max, Min, Sum, Avg. of given numbers from an array.
#include<stdio.h>
int main()
{
	int n;
	
	printf("Enter a array element:");
	scanf("%d",&n);
	
	int min,max,sum=0,arr[n],i;
	float avg;
	
	for(i=0;i<n;i++)
	{
		printf("Enter a number:");
		scanf("%d",&arr[i]);
	}
	
    min=arr[0];max=arr[0];
    
	for(i=0;i<n;i++)
	{
		sum=sum+arr[i];
	    
	    if(arr[i]<min)
	    {
	    	min=arr[i];
		}
	    if(arr[i]>max)
	    {
	    	max=arr[i];
		}
	}
	avg=sum/n;
	    
	printf("max=%d\nmin=%d\nsum=%d\navg=%f\n",max,min,sum,avg);
		
	return 0;
}
