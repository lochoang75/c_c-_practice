// Fig.9.17: Date.h
// Date class definition; Member functions defined in Date.cpp
#ifndef DATE_H
#define DATE_H

class Date
{
public:
    static const unsigned int monthsPerYear = 12; // months in a year
    explicit Date(int = 1, int = 1, int = 1900); // Default constructor
    void print() const; // print date in month/day/ year format
    ~Date(); // provided con confirm destructor order
private:
    unsigned int month; // 1 - 12 (January-December)
    unsigned int day; // 1 - 31 base on month
    unsigned int year; // any year

    // utility function to check if day is proper for month and year
    unsigned int checkDay(int) const;

}; // end class
#endif /* End Date.h */
