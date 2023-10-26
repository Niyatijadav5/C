//Print all uppercase and lowercase alphabets.
#include<stdio.h>
int main()
{
	char ch='A';
	
	printf("Upper case:\n");
	
	while(ch<='Z')
	{
		printf("%c\n",ch);
		ch++;
	}
	
	ch='a';
	
	printf("Lower case:\n");
	
	while(ch<='z')
	{
		printf("%c\n",ch);
		ch++;
	}
	return 0;
}
