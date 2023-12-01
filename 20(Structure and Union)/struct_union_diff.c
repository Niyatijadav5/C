//Demonstrate difference between structure and union.
#include<stdio.h>
struct student
{
	char name[20];
	int sem;
	float spi;
};
union student2
{
	char name[20];
	int sem;
	float spi;
};
int main()
{
	printf("size of struct=%d\n",sizeof(struct student));
	printf("size of union=%d",sizeof(union student2));
	
	return 0;
}
