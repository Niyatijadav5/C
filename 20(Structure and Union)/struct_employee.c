//Create, declare and initialize structure employee.
#include<stdio.h>
struct employee
{
	char name[50];
	int id;
	float salary;
};
int main()
{
	struct employee e1;
	
    printf("Enter name:");
    scanf("%s",e1.name);
    
    printf("Enter I'd number:");
    scanf("%d",&e1.id);
    
    printf("Enter salary:");
    scanf("%f",&e1.salary);
    
    printf("Employee name=%s",e1.name);
    printf("\nI'd number=%d",e1.id);
    printf("\nsalary=%f",e1.salary);
    
    return 0;
}

