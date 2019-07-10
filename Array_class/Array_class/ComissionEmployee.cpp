// Fig 11.5: CommissionEmployee.cpp
// Class commissionEmployee member-function definitions.
#include <iostream>
#include <stdexcept>
#include "ComissionEmployee.h" // CommissionEmployee class definition
using namespace std;

// constructor
CommissionEmployee::CommissionEmployee(
    const string& first, const string& last, const string& ssn,
    double sales, double rate): Employee(first, last, ssn)
{
    setGrossSales(sales); // validate and store gross sales
    setCommissionRate(rate); // validate and store commission rate
} // end CommissionEmployee constructor


// set gross sales amount
void CommissionEmployee::setGrossSales(double sales)
{
	if (sales >= 0.0)
		grossSales = sales;
	else
		throw invalid_argument("Gross sales must be >= 0");
} // end function setGrossSales

// return gross sales amount
double CommissionEmployee::getGrossSales() const
{
	return grossSales;
} // end function getGrossSales

// set commission rate 
void CommissionEmployee::setCommissionRate(double rate)
{
	if (rate > 0.0 && rate < 1.0)
		commissionRate = rate;
	else
		throw invalid_argument("Commission rate must be > 0.0 and < 1.0");
} // end function setCommissionRate

// return comission rate
double CommissionEmployee::getCommissionRate() const
{
	return commissionRate;
} // end function getCommissionRate

// calculate earnings
double CommissionEmployee::earnings() const
{
	return commissionRate * grossSales;
} // end function earnings

// print CommissionEmployee object
void CommissionEmployee::print() const
{
	cout << "commission employee: ";
	Employee::print(); //code reuse
	cout << "\ngross sales: " << getGrossSales()
		<< "; commission rate: " << getCommissionRate();
} // end function print
