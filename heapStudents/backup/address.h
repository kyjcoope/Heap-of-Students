//address.h
#ifndef ADDRESS_H_EXISTS
#define ADDRESS_H_EXISTS

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <cstdlib>

class Address{
   private:
      std::string address1,address2,city,state,zip;
   public:
      Address();
      ~Address();
      std::string get_address1();
      std::string get_address2();
      std::string get_city();
      std::string get_state();
      std::string get_zip();
      void set_address1(std::string);
      void set_address2(std::string);
      void set_city(std::string);
      void set_state(std::string);
      void set_zip(std::string);
};
#endif
