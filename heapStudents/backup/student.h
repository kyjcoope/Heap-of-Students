//student.h
#ifndef STUDENT_H_EXISTS
#define STUDENT_H_EXISTS

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include "address.h"
#include "date.h"
#include "name.h"
#include "grade.h"

class Student{
   private:

   public:
       Student();
       ~Student();
      Name name;
      Address address;
      Date dateBirth;
      Date completionDate;
      Grade grade;
      //void title(std::istream& inFile);
       //Name get_name();
};
#endif
