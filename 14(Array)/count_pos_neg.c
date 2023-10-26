//Count number of positive or negative number from an array of n numbers.
#include<stdio.h>
int main()
{
	int n;
	
	printf("Enter array element:");
	scanf("%d",&n);
	
	int i,pos=0,neg=0,zero=0,arr[n];
	
	for(i=0;i<n;i++)
	{
		printf("Enter a number:");
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<n;i++)
	{
		if(arr[i]>0)
		{
			pos++;
		}
		else if(arr[i]<0)
		{
			neg++;
		}
		else
		{
			zero++;	
		}
	}
	printf("positive=%d,\nnegative=%d,\nzero=%d,\n",pos,neg,zero);
	return 0;
}
