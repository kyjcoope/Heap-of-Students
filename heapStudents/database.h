#ifndef DATABASE_H_EXISTS
#define DATABASE_H_EXISTS

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <iomanip>
#include "student.h"

class Database: public Student{
   private:

   public:
    Database();
    ~Database();
    int title_size[11];
    std::string title;
    Student* StudentPtr;
    std::ifstream inFile;
    void make_title(std::istream& inFile);
    void set_all(std::istream& inFile,Student* StudentPtr);
    void print_all(Student* StudentPtr);
    void run();
    void print_title();
    std::string print_single(std::string, int);
};

#endif
