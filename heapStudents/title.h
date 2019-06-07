#ifndef TITLE_H_EXISTS
#define TITLE_H_EXISTS

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <iomanip>

class Title{
   private:
       std::string sur;
       std::string giv;
       std::string add1;
       std::string add2;
       std::string city;
       std::string state;
       std::string zip;
       std::string birth;
       std::string grad;
       std::string gpa;
       std::string credit;
   public:
       Title();
       ~Title();
       std::string get_sur();
       std::string get_giv();
       std::string get_add1();
       std::string get_add2();
       std::string get_city();
       std::string get_state();
       std::string get_zip();
       std::string get_birth();
       std::string grad();
       std::string gpa();
       std::string credit();
       void set_sur(std::string sur);
       void set_giv(std::string giv);
       void set_add1(std::string add1);
       void set_add2(std::string add2);
       void set_city(std::string city);
       void set_state(std::string state);
       void set_zip(std::string zip);
       void set_birth(std::string birth);
       void set_grad(std::string grad);
       void set_gpa(std::string gpa);
       void set_sur(std::string credit);
};
#endif
