// Fig 12.10: Employee.cpp
// Abastract-base-class Employee member function definitions.
// Note: No definitions are given for pure virtual functions
#include <iostream>
#include "Employee.h"// Employee class definition
using namespace std;

// constructor
Employee::Employee(const string& first, const string& last, const string& ssn)
	:firstName(first), lastName(last), socialSecurityNumber(ssn)
{
	// empty body
} // end  constructor

// set first name
void Employee::setFirstName(const string& first)
{
	firstName = first;
} // end setFirstName function

// return first name
string Employee::getFirstName() const
{
	return firstName;
} // end getFirstName function

// set last name
void Employee::setLastName(const string& last)
{
	lastName = last;
} // end function setLastName

// return last name
string Employee::getLastName() const
{
	return lastName;
} // end function getLastName

// set social security number
void Employee::setSocialSecurityNumber(const string& ssn)
{
	socialSecurityNumber = ssn;
} // end function setSocialSecurityNumber

// get social security number
string Employee::getSocialSecurityNumber() const
{
	return socialSecurityNumber;
} // end function getSocialSecurityNumber

// print Employee's infomation (virtual, but not pure virtual)
void Employee::print() const
{
	cout << getFirstName() << ' ' << getLastName()
		<< "\nSocial security number: " << getSocialSecurityNumber();
} // end function print