// Fig 11.4: CommissionEmployee.h
// CommissionEmployee class definition present the commission employee.
#ifndef COMMISSION_H
#define COMMISSION_H

#include <string> // c++ standard string class

class CommissionEmployee
{
public:
    CommissionEmployee(const std::string&, const std::string&,
        const std::string&, double = 0.0, double = 0.0);

    void setFirstName(const std::string&); // set first name
    std::string getFirstName() const; // return Firs Name

    void setLastName(const std::string&); // set last name
    std::string getLastName() const; //return last name

    void setSocialSecurityNumber(const std::string&); // set SSN
    std::string getSocialSecurityNumber() const; // return SSN 

    void setGrossSales(double); // set gross slaes amount
    double getGrossSales() const; // return gross sales amount

    void setCommissionRate(double); // set commission rate (percentage)
    double getCommissionRate() const; // return commission rate

    double earnings() const; // calculate earnings
    void print() const; // print CommissionEmployee object
private:
    std::string firstName;
    std::string lastName;
    std::string socialSecurityNumber;
    double grossSales; // gross weekly sales
    double commissionRate; // commission percentage
};

#endif