//main.cpp
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <iomanip>
#include "student.h"
#include "functions.h"
using namespace std;

int main(){

Student* StudentPtr = new Student[50];
Student* pStudentPtr = StudentPtr;

ifstream inFile;
inFile.open("students.dat");

title(inFile);
set_all(inFile,StudentPtr);
print_all(StudentPtr);

inFile.close();

delete [] StudentPtr;

}//end main
