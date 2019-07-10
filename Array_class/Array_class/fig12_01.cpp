// Fig 12.01: fig12_01.cpp
// Aiming base-class and derived-class pointers at base clas
// and derived-class objects, respectively.
#include <iostream>
#include <iomanip>
#include "ComissionEmployee.h"
#include "BasePlusCommissionEmployee.h"
using namespace std;

int main(int argc, char* argv[])
{
	// create base-class object
	CommissionEmployee commissionEmployee(
		"Sue", "Johnes", "222-22-222", 10000, 0.06);

	// create base-class pointer
	CommissionEmployee* commissionEmmployeePtr = nullptr;

	// create derived-class object
	BasePlusCommissionEmployee basePlusCommissionEmployee(
		"Bob", "Lewis", "333-33-333", 5000, 0.04, 300);

	// create derived-class pointer
	BasePlusCommissionEmployee* basePlusCommissionEmployeePtr = nullptr;
	
	// set floating-point output formating
	cout << fixed << setprecision(2);

	// output objects commissionEmployee and basePlusCommissionEmployee
	cout << "Print base-class and derived-class objects: \n\n";
	commissionEmployee.print(); // invokes base-class print
	cout << "\n\n";
	basePlusCommissionEmployee.print(); // invoke derived-class print

	// aim base-class pointer at base-class object and print
	commissionEmmployeePtr = &commissionEmployee; // perfectly natural
	cout << "\n\nCalling print with base-class pointer to "
		<< "\nbase-class object ivokes base class print function:\n\n";
	commissionEmmployeePtr->print(); // invoke base-class print function

	// aim derived-class pointer to derived-class object and print
	basePlusCommissionEmployeePtr = &basePlusCommissionEmployee; //natural
	cout << "\n\n\nCalling print with derived-class pointer to "
		<< "\nderived-class object invokes derived-class "
		<< "print function:\n\n";
	basePlusCommissionEmployeePtr->print(); // invokes derived-class print

	// aim base-class pointer at derived-class object and print
	commissionEmmployeePtr = &basePlusCommissionEmployee;
	cout << "\n\n\nCalling print with base-class pointer to "
		<< "derived-class object\ninvokes base-class print "
		<< "function on that derived-class object: \n\n";
	commissionEmmployeePtr->print(); // invokes base-class print
	cout << endl;
} // end main