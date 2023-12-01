// Demonstrate nested structure.
#include <stdio.h>
struct address
{
    char HouseNo[25];
    char City[25];
};

struct student
{
    char name[25];
    int rollno;
    float cpi;
    struct address add;
};

int main()
{
    int i;
    struct student s;
    
    printf("Enter student name : ");
    scanf("%s", s.name);
    printf("Enter student rollno : ");
    scanf("\n%d", &s.rollno);
    printf("\nEnter student cpi : ");
    scanf("%f", &s.cpi);
    printf("Enter student city : ");
    scanf("\n%s", s.add.City);
    printf("Enter student HouseNo : ");
    scanf("\n%s", s.add.HouseNo);
    
    printf("\nDetails of student : ");
    
    printf("\nStudent name : %s", s.name);
    printf("\nStudent rollno : %d", s.rollno);
    printf("\nStudent cpi : %f", s.cpi);
    printf("\nStudent city : %s", s.add.City);
    printf("\nStudent houseno : %s", s.add.HouseNo);
    
    return 0;
}
