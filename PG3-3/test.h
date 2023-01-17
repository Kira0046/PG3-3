#pragma once
#include <stdio.h>

class Student {
protected:
public:
	static int studentCount;
	Student() { studentCount++; }
	~Student() { studentCount--; }
};
