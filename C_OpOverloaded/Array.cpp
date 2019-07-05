// Fig .10.11: Array.cpp
// Array class member and friend function definitions.
#include <iostream>
#include <iomanip>
#include <stdexcept>

#include "Array.h" // Array class definition
using namespace std;

//default constructor for class Array (default size 10)
Array::Array( int arraySize ): size( arraySize > 0 ? arraySize : throw invalid_argument("Array size must be greater than 0")), ptr( new int[ size ] )
{
    for (size_t i = 0; i < size; ++i)
        ptr[ i ] = 0; // set pointer-based array element
} // end array default constructor

// copy constructor for class Array;
// must receive a reference to an Array
Array::Array( const Array &arrayToCopy ): size( arrayToCopy.size ), ptr( new int[ size ] )
{
    for (size_t i = 0; i < size; ++i)
        ptr[ i ] = arrayToCopy.ptr[i];// copy into object
} // end Array copy constructor

// destructor for class Array
Array::~Array()
{
    delete [] ptr; // release pointer-based array space
} // end destructor

// return number of elements of array
size_t Array::getSize() const
{
    return size; // number of elements in Array
} // end function getSize

// overloaded assignment operator;
// const return to avoid:(a1 = a2) = a3
