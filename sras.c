/*A program to store student records as Structures and sort them by names*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//struct person with 3 fields.
struct Student{
	int id;
	char* name;
	int age;
};

//setting up rules for comparison
//to sort the students based on names
int comparator (const void* p, const void* q) {
	return strcmp(((struct Student*)p)->name, ((struct Student*)q)->name);
}	

//Driver program
int main() {
	int i = 0, n = 5;

	struct Student arr[n];

	//student data
	arr[0].id = 1;
	arr[0].name = "pqwok";
	arr[0].age = 13;

	arr[1].id = 2;
	arr[1].name = "op";
	arr[1].age = 15;

	arr[2].id = 3;
	arr[2].name = "e";
	arr[2].age = 17;

	arr[3].id = 4;
	arr[3].name = "jds";
	arr[3].age = 21;

	arr[4].id = 5;
	arr[4].name = "dbks";
	arr[4].age = 19;

	//print the unsorted structure
	printf("Unsorted Students Records: \n ");
	for (i = 0; i < n; i++) {
		printf("Id = %d, Name = %s, Age = %d\n", arr[i].id, arr[i].name, arr[i].age);		
	}

	//sort the structure
	//based on specific comparator
	qsort(arr, n, sizeof(struct Student), comparator);

	//print the sorted structure
	printf("\n\nStudent Records sorted by Name: \n");
	for(i = 0; i < n; i++) {
	printf("Id = %d, Name = %s, Age = %d\n", arr[i].id, arr[i].name, arr[i].age);
	}
	return 0;
}
