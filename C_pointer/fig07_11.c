// Fig. 7. 11: fig07_11.c
// Printing a string one character at a time using
// a non-constant pointer to constant data.
#include <stdio.h>

void printCharacters( const char *sPtr );

int main (void) 
{
    // initialize char array
    char string[] = "print characters of a string";

    puts("The string is: ");
    printCharacters( string );
    puts("");
    //end main
}

// sPtr cannot modify the character to which points,
// i.e , sPtr is a "read-only" pointer
void printCharacters( const char *sPtr )
{
    // loop throuh entire string
    for (; *sPtr != '\0'; ++sPtr) {
        // no initialization 
        printf("%c", *sPtr);
    } //end for
} //end function printCharacters
