#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <cstdlib>

#include "grade.h"
using namespace std;

Grade::Grade(){

}
Grade::~Grade(){

}
string Grade::get_gpa(){
   return gpa;
}
string Grade::get_credit(){
   return credit;
}
void Grade::set_gpa(string new_gpa){
   gpa=new_gpa;
}
void Grade::set_credit(string new_credit){
   credit=new_credit;
}
