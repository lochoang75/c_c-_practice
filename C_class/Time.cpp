// Fig 9.2: Time.cpp
// Time class member-function definitions.
#include <iostream>
#include <iomanip>
#include <stdexcept> // for valid_argument exception class
#include "Time.h" // include definiton of class Time from Time.h

using namespace std;

// Time constructor initializes each data member to zero.
Time::Time(int hour, int minute, int second)
{
    setTime(hour, minute, second);
} // end Time constructor

// set new Time value using universal time
void Time::setTime(int h, int m, int s)
{
    setHour(h);
    setMinute(m);
    setSecond(s);
} // end function setTime

// set hour value
void Time::setHour(int h)
{
    if (h >= 0 && h < 24)
        hour = h;
    else 
        throw invalid_argument("hour must be 0 - 23");
} // end function setHour

// set Minute value
void Time::setMinute(int m)
{
    if (m >=0 && m < 60)
        minute = m;
    else
        throw invalid_argument("minute must be 0 - 59");
} // end function set Minute

// set Second value
void Time::setSecond(int s)
{
    if (s >= 0 && s < 60)
        second = s;
    else
        throw invalid_argument("second must be 0 - 59");
} // end fucntion set Second

// return hour value
unsigned int Time::getHour() const
{
    return hour;
} // end function getHour

// return Minute value
unsigned int Time::getMinute() const
{
    return minute;
} // end function get minute 

// return Second value
unsigned int Time::getSecond() const 
{
    return second;
}

// prin Time in universal-time format (HH:MM:SS)
void Time::printUniversal() const
{
    cout << setfill('0') << setw(2) << hour << ":" 
         << setw(2) << minute << ":" << setw(2)<< second;
} // end function printUniversal

// print Time in standard-time format (HH:MM:SS AM or PM)
void Time::printStandard() const 
{
    cout << ((hour == 0 || hour == 1) ? 12: hour % 12) << ":"
         << setfill('0') << setw(2) << minute << ":" << setw(2)
         << second << (hour < 12 ? "AM" : "PM");
} // end fucntion printStandard
