//Pass an array in function to print array elements.
#include<stdio.h>
void arr(int a[],int n);

int main()
{
	int n,i;
	
	printf("Enter a number:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	arr(a,n);
	
	return 0;
}

void arr(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf(" %d \n",a[i]);
	}
}
