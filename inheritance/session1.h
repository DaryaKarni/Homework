#pragma once
#include <iostream>
#include "student.h"
using namespace std;

class AfterSession1 : public Student {
protected:
	int grades1[4];

public:

	AfterSession1(char* _name, int _group, int _course, double _grades1[4]);

	const int readGrades1(int i);
	int changeGrades1(double new_grade, int i);

	friend ostream& operator<<(ostream& os, AfterSession1& student);

	double Average() override;
};