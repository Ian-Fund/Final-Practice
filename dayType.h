#pragma once
#include <iostream>


using namespace std;
class dayType {
private:
    string weekDay;
public:
    static string weekDays[7];
    dayType();
    dayType(string d);
    void setDay(string d);
    string getDay() const;
    void print() const;
    string nextDay() const;
    string prevDay() const;
    void addDay(int nDays);
};
