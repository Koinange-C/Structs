/*A project to store information of students using structure*/
#include <stdio.h>
#include <string.h>

struct Students {
	int roll_number;
	int age;
	double total_marks;
	char name[100];
} Students;

int main(){
	struct Students s1, s2;
	
	printf("\n=========STUDENT RECORD MANAGEMENT========\n");
	
	//Input for student 1
	printf("Enter details for student 1:\n");
	printf("Roll number:");
	scanf("%d", &s1.roll_number);
	printf("Age of Student: ");
	scanf("%d", &s1.age);
	printf("Total marks: ");
	scanf("%lf", &s1.total_marks);
	getchar();
	printf("Name: ");
	fgets(s1.name, 100, stdin);

	//input for student 2 
	printf("\nEnter details for student 2:\n");
	printf("Roll number:");
	scanf("%d", &s2.roll_number);
	printf("Age of Student: ");
	scanf("%d", &s2.age);
	printf("Total marks:");
	scanf("%lf", &s2.total_marks);
	getchar();
	printf("Name:");
	fgets(s2.name, 100, stdin);

	//Display all students
	printf("\nStudent 1:\n");
	printf("Roll number: %d\n", s1.roll_number);
	printf("Age of student: %d\n", s1.age);
	printf("Total marks: %lf\n", s1.total_marks);
	printf("Name: %s\n", s1.name);

	printf("Student 2: \n");
	printf("Roll number: %d\n", s2.roll_number);
	printf("Age of Student: %d\n", s2.age);
	printf("Total marks: %lf\n", s2.total_marks);
	printf("Name: %s\n", s2.name);

	return 0;	
}
