// Print given number in reverse order
#include <stdio.h>
int main()
{
	int i, rem;
	
	printf("Enter number : ");
	scanf("%d", &i);
	
	while (i > 0)
	{
		rem = i % 10;
		printf("%d", rem);
		i = i / 10;
	}
	return 0;
}

