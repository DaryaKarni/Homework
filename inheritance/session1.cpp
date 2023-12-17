#include <iostream>
#include "session1.h"

using namespace std;

AfterSession1::AfterSession1(char* _name,int _group,int _course,double _grades1[4]): Student(_name, _group,_course){
	for (int i = 0; i < 4; i++) {
		grades1[i] = _grades1[i];
    }
}

const int AfterSession1::readGrades1(int i) {
	return grades1[i];
}

int AfterSession1::changeGrades1(double new_grade, int i) {
	grades1[i] = new_grade;
	return grades1[i];
}

ostream& operator<<(ostream& os, AfterSession1& student) {
	os << "Student's name: ";
	for (int i = 0; i < sizeof(student.name); i++) {
		cout << student.name[i];
	}
	os << "\n\t course: " << student.course << "\n\t group: " << student.group
		<< "\n\t grades after first session: ";
	for (int i = 0; i < 4; i++) {
		os << student.grades1[i] << " ";
		return os;
	}
}

	double AfterSession1::Average() {

		double sum_grades1 = 0.0;
		for (int i = 0; i < 4; i++) {
			sum_grades1 += grades1[i];
		}
		return sum_grades1 / 4.0;
	} 