#include<stdio.h>
int main()
{
	int sec,hours,min,remainingsec;
	printf("Enter the number of seconds:");
	scanf("%d",&sec);
	hours=sec/3600;
	remainingsec=sec%3600;
	min=remainingsec%60;
	remainingsec=remainingsec%60;
	printf("time in HH:MM:SS format=%d:%d:%d",hours,min,remainingsec);
	return 0;
}
