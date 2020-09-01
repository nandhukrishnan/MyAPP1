#include<iostream>
#include<string>

#include "Student.h"

using namespace std;

ostream& operator<<(ostream& out, const Student& s)
{
	out << "Name: " << s.getName() << " Age: " << s.getAge();
	return out;
}

istream& operator>>(istream& in, Student& s)
{
	in >> s.name >> s.age;
	return in;
}

int main()
{
	Student s1;
	cout << "Enter Name and age:\n";
	cin >> s1;
	cout << "\nOutput with issue\n";
	cout << s1;
	return 0;
}