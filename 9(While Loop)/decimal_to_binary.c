//Convert decimal number to binary. (i.e. n=11  output: 1101)
#include<stdio.h>
#include<math.h>
int main()
{
	int n,i=1,bin=0,dec=1,rem;
	
	printf("Enetr a number:");
	scanf("%d",&n);
	
	while(bin!=0)
	{
	rem=n%2;	                     //bin=binary
	bin=bin+rem*dec;	             //rem=reminder
	dec=dec*10;                      //dec=decimal
	bin=bin/2;
	
	printf("%d",bin);
	} 
	return 0;
}
