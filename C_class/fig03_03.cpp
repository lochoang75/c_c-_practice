// Fig. 3.3: fig03_03.cpp
// Define class GradeBook with a member function that takes a parameter,
// create a GradeBook object and call its displayMessage function.
#include <iostream>
#include <string> // program uses C++ standard strin class
using namespace std;

// GradeBook class definition
class GradeBook
{
public:
    // function that displays a welcome message to the GradeBook user
    void displayMessage(string courseName) const
    {
        cout << "Welcome to the grade book for \n"<< courseName<<"!"
            <<endl;
    } // end function displayMessage
}; // End class Grade Book

// function main begin program execution
int main(int argc, char*argv[])
{
    string nameOfCourse; // string of charaters to store the course name
    GradeBook myGradeBook; // create a GradeBook object named myGradeBook

    // prompt for and input course name
    cout << "Please enter the course name: "<< endl;
    getline(cin, nameOfCourse); // read a course name with blanks
    cout << endl; // ouput a blank line

    // call myGradeBook's displayMessage function
    // and pass nameOfCourse as an argument
    myGradeBook.displayMessage(nameOfCourse);
} // end main
