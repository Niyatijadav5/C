//Read five person height and weight and count the number of person having height greater than 170 and weight less than 50.
#include<stdio.h>
int main()
{
	int i,j,w,h,count=0;
	int arr[i],arry[j];
	
	for(i=1;i<=5;i++)
	{
		printf("Enter height of %d person in cm :",i);
		scanf("%d",&arr[h]);
	}
	
	for(j=1;j<=5;j++)
	{
		printf("\tEnter weight of %d person in kg:",j);
		scanf("%d",&arry[w]);
	}
	
	for(i=1;i<=5;i++)
	{
	    if(arr[h]>170)
		{
			if(arry[w]<50)
			{
				count++;
			}
		}	
	}
	printf("Number of person=%d",count);
	return 0;
}
