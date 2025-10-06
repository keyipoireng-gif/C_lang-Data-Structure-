#include<stdio.h>

struct student
{
	int rollno;
	char name[50];
	float marks;
};

int main()
{
	 struct student s;
	printf("Enter roll number=");
	scanf("%d",&s.rollno);
	
	printf("Enter Name=");
	scanf("%s",&s.name);
	
	printf("Enter marks=");
	scanf("%f\n",&s.marks);
	
	printf("Student Records \n:");
	printf("Roll Number= %d\n",s.rollno);
    printf("Name= %s\n",s.name);
	printf("Marks of student= %f\n",s.marks);
	
	return 0;
}