/**
 * Project OOP3200 lesson 4
 * @author Kaifkhan Vakil
 */


#include "Professor.h"


#include <iostream>
#include <utility>

/**
 * Professor implementation
 */


/**
 * @param first_name
 * @param last_name
 * @param age
 * @param emmployee_id
 */
Professor::Professor(string first_name, string last_name, const float age, string emmployee_id)
	:Person(std::move(first_name), std::move(last_name), age), m_employeeID()
{

}

/**
 * @return string
 */
string Professor::getEmployeeID() 
{
    return m_employeeID;
}

/**
 * @param value
 */
void Professor::setEmployeeID(string value)
{
    m_employeeID = value;
}

/**
 * @return void
 */
void Professor::Teaches() {
  cout << getFirstName() << " is teaching" << endl;
}

/**
 * @return string
 */
string Professor::ToString()
{
    std::string output_string;

    output_string += Person::ToString();
    output_string += "----------------------------------\n";
    output_string += "First name: " + getEmployeeID() + "\n";
    output_string += "----------------------------------\n";

    return output_string;
}