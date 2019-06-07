#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <cstdlib>

#include "name.h"
using namespace std;

Name::Name(){
   last="last";
   first="first";
}
Name::~Name(){

}
string Name::get_last(){
   return last;
}
string Name::get_first(){
   return first;
}
void Name::set_last(string new_last){
   last=new_last;
}
void Name::set_first(string new_first){
   first=new_first;
}
