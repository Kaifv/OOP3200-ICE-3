/**
 * Project OOP3200 lesson 4
 * @author Kaifkhan Vakil
 */

#pragma once

#ifndef _STUDENT_H
#define _STUDENT_H

#include "Person.h"
#include <string>


class Student: public Person {
public: 
    
/**
 * @param first_name
 * @param last_name
 * @param age
 * @param student_id
 */
 Student(string first_name, string last_name, float age, string student_id);
    
string getStudentID() const;
    
/**
 * @param value
 */
void setStudentID(string value);
    
void Studies();
    
string ToString() override;
private: 
    string m_studentID;

};

#endif //_STUDENT_H