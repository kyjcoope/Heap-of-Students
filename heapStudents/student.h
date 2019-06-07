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
      Name* namePtr;

   public:
       Student();
       ~Student();

       Address* addressPtr;
       Date* dateBirthPtr;
       Date* completionDatePtr;
       Grade* gradePtr;

       Name get_name();
};
#endif
