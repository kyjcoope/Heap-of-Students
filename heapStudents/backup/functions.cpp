#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <iomanip>
#include "functions.h"
#include "student.h"
using namespace std;

void title(istream& inFile){
   int i,length;
   string line;

   for(i=0;i<11;i++){
       if(i==10){
          getline(inFile,line);
          cout << left << line << endl;
       }
       else{
          getline(inFile,line,',');
          length = line.length();
          cout << left << setw(length + 2) << line;
       }
   }
}
void set_all(std::istream& inFile,Student* StudentPtr){
    int i;
    string line;

   for(i=0;i<50;i++){
      getline(inFile,line,',');
      StudentPtr[i].name.set_last(line);

      getline(inFile,line,',');
      StudentPtr[i].name.set_first(line);

      getline(inFile,line,',');
      StudentPtr[i].address.set_address1(line);

      getline(inFile,line,',');
      StudentPtr[i].address.set_address2(line);

      getline(inFile,line,',');
      StudentPtr[i].address.set_city(line);

      getline(inFile,line,',');
      StudentPtr[i].address.set_state(line);

      getline(inFile,line,',');
      StudentPtr[i].address.set_zip(line);

      getline(inFile,line,'/');
      StudentPtr[i].dateBirth.set_month(line);

      getline(inFile,line,'/');
      StudentPtr[i].dateBirth.set_day(line);

      getline(inFile,line,',');
      StudentPtr[i].dateBirth.set_year(line);

      getline(inFile,line,'/');
      StudentPtr[i].completionDate.set_month(line);

      getline(inFile,line,'/');
      StudentPtr[i].completionDate.set_day(line);

      getline(inFile,line,',');
      StudentPtr[i].completionDate.set_year(line);

      getline(inFile,line,',');
      StudentPtr[i].grade.set_gpa(line);

      getline(inFile,line);
      StudentPtr[i].grade.set_credit(line);
   }
}
void print_all(Student* StudentPtr){
   int i;

   for(i=0;i<50;i++){
       cout << StudentPtr[i].name.get_last() << ','
            << StudentPtr[i].name.get_first() << ','
            << StudentPtr[i].address.get_address1() << ','
            << StudentPtr[i].address.get_address2() << ','
            << StudentPtr[i].address.get_city() << ','
            << StudentPtr[i].address.get_state() << ','
            << StudentPtr[i].address.get_zip() << ','
            << StudentPtr[i].dateBirth.get_month() << '/'
            << StudentPtr[i].dateBirth.get_day() << '/'
            << StudentPtr[i].dateBirth.get_year() << ','
            << StudentPtr[i].completionDate.get_month() << '/'
            << StudentPtr[i].completionDate.get_day() << '/'
            << StudentPtr[i].completionDate.get_year() << ','
            << StudentPtr[i].grade.get_gpa() << ','
            << StudentPtr[i].grade.get_credit() << endl;
   }
}
