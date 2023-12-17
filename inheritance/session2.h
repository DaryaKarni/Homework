#pragma once
#include <iostream>
#include "session1.h"
using namespace std;

class AfterSession2 : public AfterSession1 {
protected:
	int grades2[5];

public:

	AfterSession2(char* _name, int _group, int _course, double _grades5[5], double _grades1[4]);

	const int readGrades2(int i);
	int changeGrades2(double new_grade, int i);

	friend ostream& operator<<(ostream& os, AfterSession2& student);

	double Average() override;
};