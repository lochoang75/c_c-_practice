// Fig.9.16: fig09_16.cpp
// const objects and const member functions.
#include "Time.h"

int main(int argc, char*argv[])
{
    Time wakeUp(6, 45, 0); // non-constant object
    const Time noon(12, 0, 0); // constant object

                        // OBJECT       //Member function
    wakeUp.setHour(18); // non-const    non-const

    noon.setHour(12);   // const        non-const

    wakeUp.getHour();   // const        const
    noon.getMinute();   // const        const
    noon.printUniversal();// const      const 

    noon.printStandard(); // const      non-const
} // end main
