// Fig. 9.21: fig09_21.cpp
// Demonstrating composition--an object with member objects.
#include <iostream>
#include "Date.h" // Date class definition
#include "Employee.h" // Employee class definition
using namespace std;

int main(int argc, char* argv[])
{
    Date birth(7, 24, 1949);
    Date hire(3, 12, 1988);
    Employee manager("Bob", "Blue", birth, hire);

    cout <<endl;
    manager.print();
} // end main
