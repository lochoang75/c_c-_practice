// Fing.9.19: Employee.h
// Employee class definition showing composition.
// Member functions defined in Employee.cpp
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>
#include "Date.h" // include Date class definition

class Employee
{
public:
    Employee( const std::string &, const std::string &, const Date &, const Date& );
    void print() const;
    ~Employee(); // provided to confirm destructor order
    std::string getFirstName() const; // return first name
    std::string getLastName() const; // return last name

    // static member function
    static unsigned int getCount(); // return # object instantiated
private:
    std::string firstName; // composition: member object
    std::string lastName; // composition: member object
    const Date birthDate; // composition: member object
    const Date hireDate; // composition: member object

    // static data
    static unsigned int count; // number of objects instantiated
}; // end class definition

#endif /* END EMPLOYEE_H*/
