//address.cpp
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include "address.h"
using namespace std;

Address::Address(){

}
Address::~Address(){

}
string Address::get_address1(){
   return address1;
}
string Address::get_address2(){
   return address2;
}
string Address::get_city(){
   return city;
}
string Address::get_state(){
   return state;
}
string Address::get_zip(){
   return zip;
}
void Address::set_address1(string new_address1){
   address1 = new_address1;
}
void Address::set_address2(string new_address2){
   address2 = new_address2;
}
void Address::set_city(string new_city){
   city = new_city;
}
void Address::set_state(string new_state){
   state = new_state;
}
void Address::set_zip(string new_zip){
   zip = new_zip;
}
