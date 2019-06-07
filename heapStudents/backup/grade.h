//grade.h
#ifndef GRADE_H_EXISTS
#define GRADE_H_EXISTS

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <cstdlib>

class Grade{
    private:
       std::string gpa,credit;
    public:
        Grade();
        ~Grade();
        std::string get_gpa();
        std::string get_credit();
        void set_gpa(std::string gpa);
        void set_credit(std::string credit);
};
#endif
