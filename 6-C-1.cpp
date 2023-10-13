#include<stdio.h>
int main()
{
	int num1,num2,num3;
	printf("Enter three number:");
	scanf("%d%d%d",&num1,&num2,&num3);
	int secondlargest;
	if(num1>num2&&num1>num3)
	{
		if(num2>num3)
		{
			secondlargest=num2;
		}
		else
		{
			secondlargest=num3;
		}
	}
	else if(num2>num1&&num2>num3)
	{
		if(num1>num3)
		{
			secondlargest=num1;
		}
		else
		{
			secondlargest=num3;
		}
	}
    else
    {
    	if(num1>num2)
    	{
    		secondlargest=num1;
		}
		else
		{
			secondlargest=num2;
		}
	}
	printf("The second largest number is %d ",secondlargest);
	return 0;
}
