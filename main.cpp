// OOP3200 ICE 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include "Person.h"
#include "Professor.h"
#include "Student.h"

int main()
{
	Person person = Person("Bob", "Smith", 35.6f);
	person.Sayshello();

	cout << person.ToString() << endl;

	Student student = Student("Mike", "Jones", 22.0f, "MJ123456");
	student.Sayshello();
	student.Studies();

	cout << student.ToString() << endl;

	Professor professor = Professor("Kaifkhan", "Vakil", 38.0f, "AMFB1542");
	professor.Sayshello();
	professor.Teaches();

	cout << professor.ToString() << endl;
}

