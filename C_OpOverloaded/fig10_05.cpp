// Fig .10.5: fig10_05.cpp
// Demonstrating class PhoneNumber's overloaded stream insertion 
// and stream extraction operators.
#include <iostream>
#include "PhoneNumber.h"
using namespace std;

int main(int argc, char*argv[])
{
    PhoneNumber phone; // create object phone

    cout << "Enter phone number in the form(123) 456-7890: "<< endl;

    // cin>> phone invokes operator >> by implicitly issuing
    // the non-member function call operator >> ( cin, phone )
    cin >> phone;

    cout << "The phone number entered was: ";

    // cout << phone invokes operator << by implicitly issuing 
    // the non-member function call operator<<( cout, phone )
    cout << phone << endl;
} // end main
