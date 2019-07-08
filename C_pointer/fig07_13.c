// Fig. 7.13: fig07_13.c
// Atempting to modify a constant pointer to non-constant data.
#include <stdio.h>

int main (void)
{
    int x; //define x
    int y; //define y

    // ptr is a constant pointer to an integer that can be modified
    // through ptr, but ptr always points to the same memory location
    int * const ptr = &x;

    *ptr = 2; // allowed; *ptr is not const
    ptr = &y; // error: ptr is const; cannot assign new address
} // end main
