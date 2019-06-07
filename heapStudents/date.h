//date.h
#ifndef DATE_H_EXISTS
#define DATE_H_EXISTS

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <cstdlib>

class Date{
   private:
     std::string month,day,year,date;
   public:
     Date();
     ~Date();
     std::string get_month();
     std::string get_day();
     std::string get_year();
     std::string get_date();
     void set_month(std::string month);
     void set_day(std::string day);
     void set_year(std::string year);
};
#endif
