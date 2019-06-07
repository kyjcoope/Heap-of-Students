#ifndef FUNCTIONS_H_EXISTS
#define FUNCTIONS_H_EXISTS

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <iomanip>
#include "student.h"

void title(std::istream& inFile);
void set_all(std::istream& inFile,Student* StudentPtr);
void print_all(Student* StudentPtr);

#endif
