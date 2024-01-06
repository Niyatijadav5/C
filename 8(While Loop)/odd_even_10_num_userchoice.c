//Get 10 numbers from user print count of odd, even numbers.
#include<stdio.h>
int  main()
{
	int i,even=0,odd=0;
	
	while(i<=10)
	{
	    printf("Enter a number:");
	    scanf("%d",&i);
	
        if(i%2==0)
        {
            even++;
    	}
    	else if(i%2!=0)
    	{
	    	odd++;
	    }
	    i++;
    }
	printf("Even=%d\nOdd=%d\n",even,odd);
	return 0;
}
