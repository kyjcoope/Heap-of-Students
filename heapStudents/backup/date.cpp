//date.cpp
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <cstdlib>

#include "date.h"
using namespace std;

Date::Date(){

}
Date::~Date(){

}
string Date::get_month(){
  return month;
}
string Date::get_day(){
   return day;
}
string Date::get_year(){
   return year;
}
void Date::set_month(string new_month){
   month = new_month;
}
void Date::set_day(string new_day){
   day = new_day;
}
void Date::set_year(string new_year){
   year = new_year;
}
