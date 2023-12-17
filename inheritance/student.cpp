#include <iostream>
#include "student.h"
using namespace std;


Student::Student(char* _name, int _group, int _course ): studentID(counterID++), record_book_num(studentID) {
	course = _course;
	name = _name;
	group = _group;
}

Student::Student(const Student& other): studentID(counterID), record_book_num(studentID) {
	name = other.name;
	course = other.course;
	group = other.group;
}

void Student::setGroup(int _group) {
	group = _group;
}
void Student::setCourse(int _course) {
	course = _course;
}
void Student::setName(char* _name) {
	name = _name;
}

int Student::getCourse() const {
	return course;
}
int Student::getGroup() const {
	return group;
}
char* Student::getName() const {
	return name;
}

ostream& operator<<(ostream& os, Student& student) {
	os << "Student's name: "; 
		for (int i = 0; i < sizeof(student.name); i++) {
		cout << student.name[i];
	    }
		os << "\n\t course: " << student.course << "\n\t group: " << student.group;
	return os;				
}