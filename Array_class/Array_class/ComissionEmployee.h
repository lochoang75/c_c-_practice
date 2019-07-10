// Fig 11.4: CommissionEmployee.h
// CommissionEmployee class definition present the commission employee.
#ifndef COMMISSION_H
#define COMMISSION_H

#include <string> // c++ standard string classỉ
#include "Employee.h"


class CommissionEmployee : public Employee
{
public:
    CommissionEmployee(const std::string&, const std::string&,
        const std::string&, double = 0.0, double = 0.0);

	virtual ~CommissionEmployee() {} // virtual destrutctor

    void setGrossSales(double); // set gross slaes amount
    double getGrossSales() const; // return gross sales amount

    void setCommissionRate(double); // set commission rate (percentage)
    double getCommissionRate() const; // return commission rate

    virtual double earnings() const override; // calculate earnings
    virtual void print() const override; // print CommissionEmployee object
private:
    double grossSales; // gross weekly sales
    double commissionRate; // commission percentage
}; // end class Commission Employee

#endif