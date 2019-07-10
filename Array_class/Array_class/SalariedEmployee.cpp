// Fig 12.12: SalariedEmployee.cpp
// SalariedEmployee class member-function definitons
#include <iostream>
#include <stdexcept>
#include "SalariedEmployee.h" // SalariedEmployee class definition
using namespace std;

// constructor 
SalariedEmployee::SalariedEmployee(const string& first,
	const string& last, const string& ssn, double salary)
	: Employee(first, last, ssn)
{
	setWeeklySalary(salary);
}

// set salary
void SalariedEmployee::setWeeklySalary(double salary)
{
	if (salary >= 0.0)
		weeklySalary = salary;
	else
		throw invalid_argument("Weekly salary must be >= 0.0");
} // end function setWeeklySalary

// return salary
double SalariedEmployee::getWeeklySalary() const
{
	return weeklySalary;
} // end function get weekly salary

// calculate earnings 
// overide virtual function earnings in employee
double SalariedEmployee::earnings() const
{
	return getWeeklySalary();
} // end function earnings 

// print SalariedEmployee's information
void SalariedEmployee::print() const
{
	cout << "Salaried employee: ";
	Employee::print(); // reuse abstract base-class print funtion
	cout << "\nWeekly salary: " << getWeeklySalary();
} // end function print

