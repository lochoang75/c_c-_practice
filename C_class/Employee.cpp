// Fig.9.20: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
#include "Employee.h" // Employee class definition
#include "Date.h" // Date class definition
using namespace std;

// define and initialize static data member at global namespace scope
unsigned int Employee::count = 0; // cannot include keyword static

// define static member function that returns number of
// Employee objects instatiated (declare static in Employee.h)
unsigned int Employee::getCount()
{
    return count;
} // end static function getCount

//constructor uses member initialize list to pass initializer
// values to constructor of member object
Employee::Employee(const string & first, const string & last, const Date & dateOfBirth, const Date & dateOfHire)
    : firstName(first), // initialize firstName
      lastName(last), // initialize lastName 
      birthDate(dateOfBirth), // initialize birthDate 
      hireDate(dateOfHire) // initialize hireDate
{
    ++count; // increment static count of employees
    // output Employee object to show when constructor is called
    cout << "Employee object constructor: " << firstName <<
         ' '<< lastName << endl;
}// end employee constructor

// return first name of employee
string Employee::getFirstName() const
{
    return firstName; // return copy of first name
} // end function get first name

// return last name of employee
string Employee::getLastName() const
{
    return lastName; // return copy of last name
}

// print Employee object
void Employee::print() const
{
    cout << lastName << ", "<< firstName << " Hired: ";
    hireDate.print();
    cout << " Birthday: ";
    birthDate.print();
    cout << endl;
} // end functtion print

// output Employee object to show when its destructor is called
Employee::~Employee()
{
    cout << "Employee object destructor: "
        << lastName << ", "<< firstName << endl;
} // end Employee destructor

