#include<stdio.h>
int main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	if(num>0)
	{
	 printf("%d is a postive number\n",num);
    } 
    else if(num<0)
    {
    	printf("%d is a negative number",num);
	}
	else
	{
		printf("%d is a zero",num);
	}
	return 0;
}
