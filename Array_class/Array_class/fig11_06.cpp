// Fig 11.6: fig 11_06.cpp
// CommissionEmployee class test program
#include <iostream>
#include <iomanip>
#include "ComissionEmployee.h"
using namespace std;

int main(int argc, char* argv[])
{
	// instantiate a CommissionEmployee object
	CommissionEmployee employee("Sue", "Jones", "222-22-2222", 10000, 0.06);

	// set floating point output formantting
	cout << fixed << setprecision(2);

	// get commission emloyee data
	cout << "Employee information obtained by get function: \n"
		<< "\nFirst name is " << employee.getFirstName()
		<< "\nLast name is " << employee.getLastName()
		<< "\nSocial security number is "
		<< employee.getSocialSecurityNumber()
		<< "\nGross sales is " << employee.getGrossSales()
		<< "\nCommission rate is. " << employee.getCommissionRate() << endl;

	employee.setGrossSales(8000); // set gross sales
	employee.setCommissionRate(0.1); // set commission rate

	cout << "\nUpdate employee informtion output by print function: \n"
		<< endl;
	employee.print(); // display the employee information

	// display the employee's earnings
	cout << "\n\nEmployee's earnings: $ " << employee.earnings() << endl;
}// end main