//Fig 11.10: BasePlusCommissionEmployee.h
// BasePlusCommissionEmployee class derived from class
// CommissionEmployee
#ifndef BASEPLUS_H
#define BASEPLUS_H

#include <string> // C++ standard string class
#include "ComissionEmployee.h" // CommissionEmployee class declaration

class BasePlusCommissionEmployee :public CommissionEmployee
{
public:
	BasePlusCommissionEmployee(const std::string&, const std::string&,
		const std::string&, double = 0.0, double = 0.0, double = 0.0);

	void setBaseSalary(double); // set base salary
	double getBaseSalary() const; // return base salary

	virtual double earnings() const override; // calculate earnings
	virtual void print() const override; // print BasePlusCommissionEmployee object
private:
	double baseSalary; // base salary
}; // end class BasePlusCommissionEmployee
#endif // !BASEPLUS_H
