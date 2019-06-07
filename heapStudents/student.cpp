//student.cpp
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include "student.h"
using namespace std;

Student::Student(){
    namePtr = new Name;
    addressPtr = new Address;
    dateBirthPtr = new Date;
    completionDatePtr = new Date;
    gradePtr = new Grade;
}
Student::~Student(){
    delete namePtr;
    delete addressPtr;
    delete dateBirthPtr;
    delete completionDatePtr;
    delete gradePtr;
}
Name Student::get_name(){
   return &namePtr;
}

