
//Calculate the average, geometric and harmonic mean of n elements in an array.
#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,sum=0,sum2=0,sum3=0;
	float avg,geo,har;
	printf("Enter size of array:");
	scanf("%d",&n);

	int arr[i];
	
	for(i=0;i<n;i++)
	{
		printf("Enter number:");
		scanf("%d",&arr[i]);
		sum=sum+arr[i];	
		sum2=sum2*arr[i];
		sum3=sum3(1/arr[i]);
	}
	avg=(float)sum/n;
	geo=pow(sum2,(1/n));
	har=n/(1.0/sum3);
	printf("average=%d\ngeometric=%d\nharmonic=%d\n",avg,geo,har);
	
	return 0;
}
