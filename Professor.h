/**
 * Project OOP3200 lesson 4
 * @author Kaifkhan Vakil
 */

#pragma once

#ifndef _PROFESSOR_H
#define _PROFESSOR_H

#include "Person.h"
#include <string>


class Professor: public Person {
public: 
    
/**
 * @param first_name
 * @param last_name
 * @param age
 * @param emmployee_id
 */
 Professor(string first_name, string last_name, float age, string emmployee_id);
    
string getEmployeeID();
    
/**
 * @param value
 */
void setEmployeeID(string value);
    
void Teaches();
    
string ToString() override;
private: 
    string m_employeeID;
};

#endif //_PROFESSOR_H