//Input a string in character array and print string and length of string.
#include<stdio.h>
#include<string.h>
int main()
{
	char arr[100];
	int length;
	
	printf("Enter name:");
	scanf("%s",&arr);
	
	length=strlen(arr);
	
	printf("Length of %s is %d",arr,length);
	return 0;
}
