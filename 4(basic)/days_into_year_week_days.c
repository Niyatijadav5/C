//Convert number of days into year, week & days. [e.g. 375 days mean 1 year, 1 week and 3 days]
#include<stdio.h>
int main()
{
	int days,years,weeks,remdays;
	
	printf("Enter the number of days:");
	scanf("%d",&days);
	
	years=days/365;
	remdays=days%365;
	weeks=remdays/7;
	remdays=remdays%7;
	
	printf("%ddays mean:%dyears:%dweek:%ddays\n",days,years,weeks,remdays);
	return 0;
}
