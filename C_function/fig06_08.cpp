// Fig . 6.8 : fig06_08.cpp
// Shifted, scaled intergets produced by 1 + rand() % 6
#include <iostream>
#include <iomanip>
#include <cstdlib> // contain function pototype for rand

using namespace std;

int main(int argc, char* argv[])
{
    // loop 20 times
    for ( unsigned int counter = 1; counter <= 20; ++counter )
    {
        // pick random number from 1 to 6 and output it
        cout << setw(10) << (1 + rand() % 6);
        
        // if counter is divisible by 5, start a new line of ouput
        if ( counter % 5 == 0 )
            cout << endl;
    } // end fo
} // end main
