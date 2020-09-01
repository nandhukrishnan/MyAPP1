#include <iostream>
#include <string>
#include "Student.h"

using namespace std;

Student::Student(string name, int age)
{
	this->name = name;
	this->age = age;
}

Student::Student() {}

string Student::getName() const { return name; }

int Student::getAge() const { return age; }
