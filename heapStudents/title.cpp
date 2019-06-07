#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <iomanip>

#include "title.h"
using namespace std;
Title::Title(){

}
Title::~Title(){

}
string Title::get_sur(){
  return sur;
}
string Title::get_giv(){
  return giv;
}
string Title::get_add1(){
  return add1;
}
string Title::get_add2(){
  return add2;
}
string Title::get_city(){
   return city;
}
string Title::get_state(){
   return state;
}
string Title::get_zip(){
   return zip;
}
string Title::get_birth(){
   return birth;
}
string Title::grad(){
   return grad;
}
string Title::gpa(){
   return gpa;
}
string Title::credit(){
   return credit;
}
void Title::set_sur(std::string new_sur){
   sur = new_sur;
}
void Title::set_giv(std::string new_giv){
   giv = new_giv;
}
void Title::set_add1(std::string new_add1){
   add1 = new_add1;
}
void Title::set_add2(std::string new_add2){
   add2 = new_add2;
}
void Title::set_city(std::string new_city){
   city = new_city;
}
void Title::set_state(std::string new_state){
   state = new_state;
}
void Title::set_zip(std::string new_zip){
   zip = new_zip;
}
void Title::set_birth(std::string new_birth){
   birth = new_birth;
}
void Title::set_grad(std::string new_grad){
   grad = new_grad;
}
void Title::set_gpa(std::string new_gpa){
   gpa = new_gpa;
}
void Title::set_sur(std::string new_credit){
   credit = new_credit;
}
