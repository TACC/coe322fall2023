/****************************************************************
 ****
 **** This file belongs with the course
 **** Introduction to Scientific Programming in C++/Fortran2003
 **** copyright 2018-2022 Victor Eijkhout eijkhout@tacc.utexas.edu
 ****
 **** fmtbasic.cxx : simplest example
 ****
 ****************************************************************/

#include <iostream>
using std::cin;
using std::cout;
using std::ostream;

#include <string>
using std::string;

#include <fmt/format.h>
using fmt::format,fmt::print;

int main() {

  //codesnippet fmtbasic
  cout << format("{}\n",2);
  string hello_string = format
    ("{} {}!","Hello","world");
  cout << hello_string << '\n';
  print
    ("{0}, {0} {1}!\n","Hello","world");
  //codesnippet end

  return 0;
}

