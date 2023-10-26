//Print sum of series 1 – 2 + 3 – 4 + 5 – 6 + 7 … n.
#include<stdio.h>
#include<math.h>
int main()
{
	int i=1,n,sum=0;
	
	printf("Enter a number:");
	scanf("%d",&n);
	
	while(i<=n)
	{
	    if(i%2==0)
        {
		    sum=sum-i;
    	}
	    else
	    {
       	  	sum=sum+i;
	    }
	    i++;
	}
	printf("%d",sum);
    return 0;	
}
