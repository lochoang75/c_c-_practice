// Fig.9.29: fig09_29.cpp
// static data member tracking the number of object of a class
#include <iostream>
#include "Employee.h" // Employee class definition
#include "Date.h" // Date class definition
using namespace std;

int main(int argc, char* argv[])
{
    // no objects exits; use class name and binary scope resolution
    // operator to access static member function getCount
    cout << "Number of employees before instatiation of any object is "
        << Employee::getCount() << endl; // use class name

    // The following scope creates and destroys
    // Employee objects before main terminates
    {
        Date d1(2, 2, 2019);
        Date d2(1, 1, 2019);
        Employee e1("Susan", "Baker", d1, d2 );
        Employee e2("Robert", "Jones" , d1, d2);

        // two objects exist; call static member function getCount again 
        // using the class name and the scope resolution operator
        cout<< "Number of employees after object are instantiated is "
            << Employee::getCount();

        cout << "\n\nEmployee 1: "
            << e1.getFirstName() << " "<< e1.getLastName()
            << "\n\nEmployee 2: "
            << e2.getFirstName() << " "<< e2.getLastName()<<"\n\n";
    } // end nested scope in main


    // no object exist, so call static member function getCount again
    // using the class name and the scope resolution operator
    cout << "\nNumber of employees after objects are deleted is "
        << Employee::getCount() << endl;
} // end main
