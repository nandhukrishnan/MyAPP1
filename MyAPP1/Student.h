#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>

using namespace std;

class Student
{
	string name;
	int age;
	public:
		Student(string, int);
		Student();
		string getName() const;
		int getAge() const;

		friend ostream& operator<<(ostream&, const Student&);
		friend istream& operator>>(istream&, Student&);
};

#endif