#include <string>
#include "Student.h"

Student::Student(void): Human()
{
	rate = 0;
}
Student::~Student(void)
{
}
Student::Student(string n, int a, float r) :Human(n, a)
{
	rate = r;
 
}
Student::Student(const Student& s)
{
	name = s.name;
	age = s.age;
	rate = s.rate;
}
void Student::Set_rate(float r)
{
	rate = r;
}
 
Student& Student::operator=(const Student& s)
{
	if (&s == this)return *this;
	name = s.name;
	age = s.age;
	rate = s.rate;
 
	return *this;
}
 
void Student::Show()
{
	cout << "\nName : " << name;
	cout << "\nAge : " << age;
	cout << "\nRate : " << rate;
	cout << "\n";
}

void Student::Input()
{
	cout << "\nName : "; cin >> name;
	cout << "\nAge : "; cin >> age;
	cout << "\nRate : "; cin >> rate;
}
