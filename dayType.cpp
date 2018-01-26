#include "dayType.h"

using namespace std;




	  string dayType::weekDays[7] =  {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"} ;


   	dayType::dayType(string d){
        weekDay = d;
    }
	void dayType::setDay(string d){
        weekDay = d;
    }
   	string dayType::getDay() const{
        return weekDay;
    }
     void dayType::print() const{
         cout<<weekDay<<endl;
     }
     string dayType::nextDay() const{
         int tracker;
         if (weekDay=="Sunday"){
             tracker = 0;
         }
         if (weekDay=="Monday"){
             tracker = 1;
         }
         if (weekDay=="Tuesday"){
             tracker = 2;
         }
         if (weekDay=="Wednesday"){
             tracker = 3;
         }
         if (weekDay=="Thursday"){
             tracker = 4;
         }
         if (weekDay=="Friday"){
             tracker = 5;
         }
         if (weekDay=="Saturday"){
             tracker = 6;
         }
         tracker++;
         if (tracker == 7){
             return weekDays[0];
         }
         else {
             return weekDays[tracker];
         }
     }
     string dayType::prevDay() const{
         int tracker;
         if (weekDay=="Sunday"){
             tracker = 0;
         }
         if (weekDay=="Monday"){
             tracker = 1;
         }
         if (weekDay=="Tuesday"){
             tracker = 2;
         }
         if (weekDay=="Wednesday"){
             tracker = 3;
         }
         if (weekDay=="Thursday"){
             tracker = 4;
         }
         if (weekDay=="Friday"){
             tracker = 5;
         }
         if (weekDay=="Saturday"){
             tracker = 6;
         }
         tracker--;
         if (tracker == -1){
             return weekDays[6];}
         else{
         return weekDays[tracker];
        }
     }
    // void dayType::addDay(int nDays);
