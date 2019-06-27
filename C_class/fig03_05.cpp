// Fig 3.5: fig03_05.cpp
// Define class GradeBook that contains a courseName data member
// and member function to set and get its value;
// Create and manipulate a GradeBook object with string class
#include <iostream>
#include <string> // program uses C++ standard string class
using namespace std;

// GradeBook class definition
class GradeBook
{
public:
    // function that sets the course name
    void setCourseName(string name) 
    {
        courseName = name; // store the course name in the object
    } // endfunction setCourseName

    // function that gets the course name
    string getCourseName() const
    {
        return courseName; // return the object's courseName
    } // end function getCourseName

    // function that display a welcome message
    void displayMessage() const
    {
        // this statement calls getCourseName to get the
        // name of the course this GradeBook represents
        cout << "Welcome to the grade book for \n"<< getCourseName() << "!" << endl;
    } // end displayMessage
private:
    string courseName; // course name for this GradeBook
}; // end class Grade Book

// function main begins program execution
int main (int argc, char* argv[])
{
    string nameOfCourse; // string of charaters to store the course name
    GradeBook myGradeBook; // create a Grade Book object named myGradeBook

    // display initial value of courseName
    cout << "Initial course name is: "<< myGradeBook.getCourseName()
         << endl;

    // promt for input and set course name
    cout << "\n Please enter the course name: " << endl;
    getline(cin, nameOfCourse); // read a course name with blanks
    myGradeBook.setCourseName(nameOfCourse); // set  the course name

    cout << endl;
    myGradeBook.displayMessage();
} // end main
