//name.h
#ifndef NAME_H_EXISTS
#define NAME_H_EXISTS

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <cstdlib>

class Name{
   private:
      std::string last;
      std::string first;
   public:
      Name();
      ~Name();
      std::string get_last();
      std::string get_first();
      void set_last(std::string last);
      void set_first(std::string first);
};
#endif
