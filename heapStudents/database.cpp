#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <iomanip>
#include "database.h"
#include "student.h"
using namespace std;

Database::Database(){
   StudentPtr = new Student[50];
   inFile.open("students.dat");
}
Database::~Database(){
    inFile.close();
   delete [] StudentPtr;
}
void Database::make_title(std::istream& inFile){
   int i,j,length;
   string line;

   for(i=0;i<11;i++){
       if(i==10){
          getline(inFile,line);
          title_size[i] = line.length(); //keeps track of size of titles for later use
          title.append(line);
       }
       else{
          getline(inFile,line,',');
          title_size[i] = line.length(); //keeps track of size of titles for later use
          title.append(line);
          for(j=0;j<2;j++)
            title.append(" ");
       }
   }
}
void Database::set_all(std::istream& inFile,Student* StudentPtr){
    int i;
    string line;

   for(i=0;i<50;i++){
      getline(inFile,line,',');
      StudentPtr[i].get_name()->set_last(line);

      getline(inFile,line,',');
      StudentPtr[i].get_name()->set_first(line);


      getline(inFile,line,',');
      StudentPtr[i].addressPtr->set_address1(line);


      getline(inFile,line,',');
      StudentPtr[i].addressPtr->set_address2(line);


      getline(inFile,line,',');
      StudentPtr[i].addressPtr->set_city(line);


      getline(inFile,line,',');
      StudentPtr[i].addressPtr->set_state(line);


      getline(inFile,line,',');
      StudentPtr[i].addressPtr->set_zip(line);


      getline(inFile,line,'/');
      StudentPtr[i].dateBirthPtr->set_month(line);


      getline(inFile,line,'/');
      StudentPtr[i].dateBirthPtr->set_day(line);


      getline(inFile,line,',');
      StudentPtr[i].dateBirthPtr->set_year(line);


      getline(inFile,line,'/');
      StudentPtr[i].completionDatePtr->set_month(line);


      getline(inFile,line,'/');
      StudentPtr[i].completionDatePtr->set_day(line);


      getline(inFile,line,',');
      StudentPtr[i].completionDatePtr->set_year(line);


      getline(inFile,line,',');
      StudentPtr[i].gradePtr->set_gpa(line);


      getline(inFile,line);
      StudentPtr[i].gradePtr->set_credit(line);
   }
}
void Database::print_all(Student* StudentPtr){
   int i,length;
   string line_front,temp,line_excess;

   for(i=0;i<50;i++){
        line_excess = "";

        line_excess.append(print_single(StudentPtr[i].get_name()->get_last(), 0));
        line_excess.append(print_single(StudentPtr[i].get_name()->get_first(), 1));
        line_excess.append(print_single(StudentPtr[i].addressPtr->get_address1(), 2));
        line_excess.append(print_single(StudentPtr[i].addressPtr->get_address2(), 3));
        line_excess.append(print_single(StudentPtr[i].addressPtr->get_city(), 4));
        line_excess.append(print_single(StudentPtr[i].addressPtr->get_state(), 5));
        line_excess.append(print_single(StudentPtr[i].addressPtr->get_zip(), 6));
        line_excess.append(print_single(StudentPtr[i].dateBirthPtr->get_date(), 7));
        line_excess.append(print_single(StudentPtr[i].completionDatePtr->get_date(), 8));
        line_excess.append(print_single(StudentPtr[i].gradePtr->get_gpa(), 9));
        cout << StudentPtr[i].gradePtr->get_credit();
        cout << endl << line_excess << endl << endl;
   }
}
void Database::run(){
   make_title(inFile);
   print_title();
   set_all(inFile,StudentPtr);
   print_all(StudentPtr);
}
void Database::print_title(){
   cout << title << endl << endl;
}
string Database::print_single(string line,int i){

   int j,length,excess;
   string line_front,temp,line_excess;

    temp = line;
    length = temp.length();

    if(length>=2+title_size[i]){
        line_front = temp.substr(0,title_size[i]);
        line_excess = temp.substr(title_size[i],2+title_size[i]);

        excess = line_excess.length();
        for(j=0;j<2+title_size[i]-excess;j++){
            line_excess.append(" ");
        }
        cout << left << setw(2+title_size[i]) << line_front;
    }
    else{
        for(j=0;j<2+title_size[i];j++)
            line_excess.append(" ");

        cout << left << setw(2+title_size[i]) << line;
    }

        return line_excess;
}
