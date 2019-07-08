// Fig. 7.12: fig07_12.c
// Attempting to modify pointer to constant data.
#include <stdio.h>
void f(const int *xPtr);// prototype

int main(void)
{
    int y; //define y

    f(&y); // f attempts illegal modification
} //end main

// xPtr cannot be used to modify the
// value of the variable to which it points
void f(const int *xPtr)
{
    *xPtr = 100; //error: cannot modify a const object
} // end function f
