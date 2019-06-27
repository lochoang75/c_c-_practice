// Fig. 3.7: fig03_07.cpp
// Instantiating multiple objects of the GradeBook class and using 
// the GradeBook constructor to specify the course name
// when each GradeBook object is created.
#include <iostream>
#include <string> // program uses C++ standard string class
using namespace std;

// GradeBook class definition
class GradeBook {
public:
    // constructor initilizes courseName with string supplied as argument
    explicit GradeBook(string name) : courseName(name)// member initialize courseName
    {
        // empty body
    } // end GradeBook constructor

    void setCourseName( string name )
    {
        courseName = name; // store the course name in the object
    } // end function setCourseName

    // function to get the course name
    string getCourseName() const
    {
        return courseName;
    }

    // display a welcome message to the GradeBook user
    void displayMessage() const
    {
        // call getCourName to get the courseName
        cout << "Welcome to grade book for \n" << getCourseName()
             <<"!" << endl;
    } // end fuction displayMessage
private:
    string courseName; // course name for this GradeBook
}; // end class definition

int main( int argc, char* argv[] )
{
    // create two GradeBook objects
    GradeBook gradeBook1("CS101: Introduction to C++ Programming");
    GradeBook gradeBook2("CS102: Data Structure in C++");

    // display initial value of courseName for each GradeBook
    cout << "gradeBook1 created for course: "<< gradeBook1.getCourseName()
        << "\ngradeBook2 created for course: "<< gradeBook2.getCourseName()
        << endl;
} //end main
