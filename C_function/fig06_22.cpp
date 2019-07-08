// Fig.6.22: fig06_22.cpp
// Unary scope resolution operator
#include <iostream>
using namespace std;

int number = 7; // global variable named number

int main(int argc, char* argv[])
{
    double number = 10.5; // local variable named number

    // display values of local and global variables
    cout << "Local double value of number: "<< number
         << "\n Global int value of number: "<< ::number<< endl;
} //end main
