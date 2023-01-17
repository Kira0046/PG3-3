#include "test.h"
#include <iostream>

int Student::studentCount;

int main() {
	Student* student1 = new Student;
	Student* student2 = new Student;
	Student* student3 = new Student;

	printf("%d\n", Student::studentCount);

	delete student1;

	printf("%d\n", Student::studentCount);

	return 0;
}