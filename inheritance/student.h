#pragma once
#include <iostream>
using namespace std;

class Student {

protected: 

	int course;
	int group;
	char* name;
	const int studentID;
    const int record_book_num;
	static int counterID;
	
public:

	Student(char* _name, int _group, int _course );
    Student(const Student& other);

	void setCourse(int _course);
	void setGroup(int _group);
	void setName(char* name);

	int getCourse() const;
	int getGroup() const;
	char* getName() const;

	virtual double Average();

	friend ostream& operator<<(ostream& os, Student& student);

private:
	//Student();
};

