//Convert given number in words. (i.e. n=3456 �� output: Three Four Five Six)
#include<stdio.h>
int main()
{
	 int num,rem,sum=0;

    printf("enter the number :");
    scanf("%d",&num);

    while(num>0)
    {
        rem=num%10;
        sum=sum*10+rem;
        num=num/10;  
	}
	num=sum;
	
	while(num>0)
	{
		rem=num%10;
		
	  	switch(rem)
		{
			case 0:
				printf("zero");
				break;
			case 1:
				printf("one");
				break;
			case 2:
				printf("two");
				break;
		    case 3:
				printf("three");
				break;
		    case 4:
				printf("four");
				break;
			case 5:
				printf("five");
				break;
			case 6:
				printf("six");
				break;
			case 7:
				printf("seven");
				break;
			case 8:
				printf("eight");
				break;
			case 9:
				printf("nine");
				break;
				
		}
		num=num/10;
	}
	return 0;
}
