#include <iostream>
#include "session2.h"
using namespace std;

AfterSession2::AfterSession2(char* _name, int _group, int _course, double _grades2[5], double _grades1[4]) : AfterSession1(_name, _group, _course, _grades1) {
	for (int i = 0; i < 5; i++) {
		grades2[i] = _grades2[i];
	}
}

const int AfterSession2::readGrades2(int i) {
	return grades2[i];
}

int AfterSession2::changeGrades2(double new_grade, int i) {
	grades2[i] = new_grade;
	return grades2[i];
}

ostream& operator<<(ostream& os, AfterSession2& student) {
	os << "Student's name: ";
	for (int i = 0; i < sizeof(student.name); i++) {
		cout << student.name[i];
	}
	os << "\n\t course: " << student.course << "\n\t group: " << student.group
		<< "\n\t grades after second session: ";
	for (int i = 0; i < 4; i++) {
		os << student.grades2[i] << " ";
		return os;
	}
}

double AfterSession2::Average() {

	double sum_grades1 = 0.0;
	for (int i = 0; i < 4; i++) {
		sum_grades1 += grades1[i];
	}

	double sum_all_grades = sum_grades1;
	for (int i = 0; i < 5; i++) {
		sum_all_grades += grades1[i];
	}
	return sum_all_grades / 9.0;
}