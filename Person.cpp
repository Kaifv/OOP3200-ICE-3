/**
 * Project OOP3200 lesson 4
 * @author Kaifkhan Vakil
 */


#include "Person.h"

#include <iostream>

/**
 * Person implementation
 */


/**
 * @param first_name
 * @param last_name
 * @param age
 */
 Person::Person(string first_name, string last_name, float age)
        : first_name_(std::move(first_name)), last_name_(std::move(last_name)), m_age(age)
 {

 }

/**
 * @return float
 */
float Person::getAge() {
    return m_age;
}

/**
 * @param value
 */
void Person::setAge(const float value) {
    m_age = value;
}

/**
 * @return string
 */
string Person::getFirstName() 
{
    return m_firstName;
}

/**
 * @param value
 */
void Person::setFirstName(string value) {
    m_firstName = value;
}

/**
 * @return string
 */
string Person::getLastName() {
    return m_lastName;
}

/**
 * @param value
 */
void Person::setLastName( string value) {
    m_lastName = std::move(value);
}

/**
 * @return void
 */
void Person::Sayshello() {
    cout << getFirstName() << " says hello" << std::endl;
}



/**
 * @return string
 */
string Person::ToString()
{
    std::string output_string = "";

    output_string += "----------------------------------\n";
    output_string += "First name: " + getFirstName() + "\n";
    output_string += "Last Name: " + getLastName() + "\n";
    output_string += "Age: " + std::to_string(getAge()) + "\n";
    output_string += "-----------------------------------\n";
 	
    return output_string;
}