/**
 * Project OOP3200 lesson 4
 * @author Kaifkhan Vakil
 */
#pragma once
#ifndef _PERSON_H
#define _PERSON_H
#include <string>

using namespace std;

class Person {
public: 
    
/**
 * @param first_name
 * @param last_name
 * @param age
 */
Person(std::string first_name, string last_name, float age);
    
float getAge();
    
/**
 * @param value
 */
void setAge(float value);
    
string getFirstName() const;
    
/**
 * @param value
 */
void setFirstName(string value);
    
string getLastName() const;
    
/**
 * @param value
 */
void setLastName(string value);
    
void Sayshello() const;
    
virtual string ToString();
private: 
    float m_age;
    string m_firstName;
    string m_lastName;

};

#endif //_PERSON_H