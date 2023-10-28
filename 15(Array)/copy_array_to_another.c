//Copy all elements of one array to another.
#include<stdio.h>
#include<string.h>
int main()
{
	int i,n;
	
	printf("Enter array size:");
	scanf("%d",&n);
	
    int arr[n],arr2[n];
    
    printf("Enter array element:");
    
    for(i=0;i<n;i++)
    {
    	scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		arr2[i]=arr[i];
	}
	
	for(i=0;i<n;i++)
	{
	printf("%d",arr2[i]);
    }
	return 0;
}

