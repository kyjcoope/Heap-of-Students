//main.cpp
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <iomanip>
#include "student.h"
#include "database.h"
using namespace std;

int main(){

Database* data = new Database;
data->run();

delete data;
}//end main
