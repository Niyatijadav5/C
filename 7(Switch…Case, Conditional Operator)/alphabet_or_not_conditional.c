//Check whether character is an alphabet or not using conditional operator.
#include <stdio.h>
int main()
{
	char choice, y;
	
	printf("Enter char : ");
	scanf("%c", &choice);
	
	((choice >= 'a' && choice <= 'z')  || (choice>='A' && choice<='Z')) ? printf("alphabet ") :printf("Not alphabet");
	
	return 0;
}

