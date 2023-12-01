//Create a structure book with book title, author, publication, and price. Read data of 3 books and display.
#include<stdio.h>
struct book
{
	char title[50],author[30],publication[30];
	float price;
};
int main()
{
	struct book b[3];
	int i;
	
	for(i=0;i<3;i++)
	{
		printf("Enter book title:");
		scanf("%s",b[i].title);
		printf("Enter author:");
		scanf("\n%s",b[i].author);
		printf("Enter publication:");
		scanf("\n%s",b[i].publication);
		printf("Enter book price:");
		scanf("\n%f",&b[i].price);
	}
	for(i=0;i<3;i++)
	{
		printf("Book title=%s\t",b[i].title);
		printf("Book author=%s\t",b[i].author);
		printf("Book publication=%s\t",b[i].publication);
		printf("Book price=%f\t",b[i].price);
	}
	return 0;
}
