/**
 * Project OOP3200 lesson 4
 * @author Kaifkhan Vakil
 */


#include "Student.h"

#include <iostream>
#include <string>
#include <utility>

/**
 * Student implementation
 */


/**
 * @param first_name
 * @param last_name
 * @param age
 * @param student_id
 */
Student::Student(string first_name, string last_name, float age, string student_id)
    :Person(std::move(first_name), std::move(last_name), age), student_id_(std::move(student_id))
{

}

/**
 * @return string
 */
string Student::getStudentID() const
{
    return m_studentID;
}

/**
 * @param value
 */
void Student::setStudentID(string value)
{
    m_studentID = std::move(value);
}

/**
 * @return void
 */
void Student::Studies()
{
    cout << getFirstName() << " is studying" << endl;
}

/**
 * @return string
 */
string Student::ToString()
{
    std::string output_string;

    output_string += Person::ToString();
    output_string += "----------------------------------\n";
    output_string += "First name: " + getStudentID() + "\n";
    output_string += "----------------------------------\n";

    return output_string;
}