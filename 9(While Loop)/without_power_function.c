//Calculate x^y without using power function.
#include<stdio.h>
#include<math.h>
int main()
{
	int x,y,i=1,n=1;
	
	printf("Enter value of x:");
	scanf("%d",&x);
	
	printf("Enter value of y:");
	scanf("%d",&y);
	
	while(y!=0)
	{
		n*=x;                             //n=n*x
	    --y;
		
    } 
   	printf("%d",n);
    return 0;	
}
