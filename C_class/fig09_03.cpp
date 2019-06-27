// Fig. 9.3: fig09_03.cpp
// Program to test class Time.
// NOTE: This file must be compiled with Time.cpp
#include <iostream>
#include <stdexcept> // for invalid_argument exeption class
#include "Time.h" // include definition of class Time from Time.h
using namespace std;

int main(int argc, char*argv[])
{
    Time t; // instaniate object t of class Time

    // output Time object t's initial values
    cout << "The initial universal time is ";
    t.printUniversal(); //00:00:00
    cout << "\nThe initial standard time is ";
    t.printStandard(); //12:00:00 AM

    t.setTime(13, 27, 6); //chang values
    cout << "\nUniversal time after setTime is ";
    t.printUniversal(); // 13:27:06
    cout << "\nStandard time after setTime is ";
    t.printStandard(); // 1:27:06 PM

    // attemp to set the time with invalid values
    try 
    {
        t.setTime(99,99,99); // all values out of range
    } // end try
    catch ( invalid_argument &e )
    {
        cout << "\nException: "<< e.what() << endl;
    } // end catch

    // output t's values after specifying invalid values
    cout << "\n\nAfter attemping invalid settings: "
        << "\nUniversal time: ";
    t.printUniversal(); // 13:27:06
    cout << "\nStandard time: ";
    t.printStandard(); // 1:27:06 PM
    cout << endl;
} //end main
