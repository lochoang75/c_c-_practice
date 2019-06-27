// Fig. 6.21: fig06_21.cpp
// Using default arguments.
#include <iostream>
using namespace std;

// function prototype that specifies default arguments
unsigned int boxVolume( unsigned int length = 1, unsigned int width = 1, unsigned int height = 1 );

int main(int argc, char* argv[])
{
    // no arguments --use default values for all dimesions
    cout << "The default box volume is: "<< boxVolume();
    
    // specify length: default width and height
    cout <<" \n \n The volume of a box with length 10, \n"
         <<" width 1,and height 1 is: "<< boxVolume(10);

    // specify length and width; default height
    cout <<" \n \n The volume of a box with length 10, \n"
         <<" width 5,and height 1 is: "<< boxVolume(10, 5);

    // specify all arguments
    cout <<" \n \n The volume of a box with length 10, \n"
         <<" width 5,and height 2 is: "<< boxVolume(10, 5, 2);
} // end main

unsigned int boxVolume(unsigned int length, unsigned int width, unsigned int height)
{
    return length * height * width;
} // end function boxVolume
