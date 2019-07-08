// Fig.9.22: fig09_22.cpp
// Friends can acess private members of a class
#include <iostream>
using namespace std;

// Count class definition
class Count 
{
    friend void setX( Count &, int ); // friend declaration
public:
    // constructor
    Count():x ( 0 ) // initialize x to 0
    {
        // empty body
    } // end constructor Count

    // output x
    void print() const
    {
        cout << x << endl;
    }
private:
    int x; // data member
}; // end class

// function setX can modify private data of Count
// because setX is declared as a friend of Count (line 9)
void setX( Count &c, int val )
{
    c.x = val; // allowed because setX is a frind of Count
} // end function setX

int main( int argc, char*arv[] )
{
    Count counter; // create Count object

    cout << "counter.x after insantiation: ";
    counter.print();

    setX(counter, 8); // set x using friend function
    cout << "counter.x after call to setX friend function: ";
    counter.print();
} //end main
