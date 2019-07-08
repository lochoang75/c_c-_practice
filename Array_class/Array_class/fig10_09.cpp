// Fig 10.09: fig10_09.cpp
// Array class test program.
#include <iostream>
#include <stdexcept>
#include "Array.h"
using namespace std;

int main()
{
    Array integers1(7); // even-element Array
    Array integers2; // 10- element by defaut

    // print integers1 size and contents
    cout << "Size of Array integers1 is "
        << integers1.getSize()
        << "\nArray after initialization:\n" << integers1;

    // print integers 2 size and contents
    cout << "\nSize of Array integers is "
        << integers2.getSize()
        << "\nArray after initialization: \n" << integers2;

    // input and print integers1 and integers2
    cout << "\nEnter 17 integers: " << endl;
    cin >> integers1 >> integers2;

    cout << "\nAfter input, the Arrays contain: \n"
        << "integers1:\n" << integers1
        << "integers2:\n" << integers2;

    // use overloaded inequality(!=) operator
    cout << "\nEvaluating: integers1 != integers2" << endl;
    if (integers1 != integers2)
        cout << "integers1 and integers2 are not equal" << endl;

    // create Array integers3 using integers1 as an
    // initializer; print size and contents
    Array integers3(integers1); // invoke copy constructor

    cout << "\nSize of Array integers3 is "
        << integers3.getSize()
        << "\nArray after initialization:\n" << integers3;

    // use overloaded assginment (=) operator
    cout << "\nAssigning integers2 to integers1: " << endl;
    integers1 = integers2; // note target Array is smaller

    cout << "integers1:\n" << integers1
        << "integers2:\n" << integers2;

    // use overloaded equality (==) operator
    cout << "\n\nAssigning 1000 to integers[5]" << endl;
    integers1[5] = 1000;
    cout << "integers1:\n" << integers1;

    // attemp to use out-of-range subscript
    try {
        cout << "\nAttemp to assign 1000 to integers[15]" << endl;
        integers1[15] = 1000; // ERROR: subscript out of range
    } // end try
    catch (out_of_range& ex)
    {
        cout << "An exception has occured: " << ex.what() << endl;
    }// end catch
} // end main
