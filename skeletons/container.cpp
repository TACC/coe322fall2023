/****************************************************************
 ****
 **** This file belongs with the course
 **** Introduction to Scientific Programming in C++/Fortran2003
 **** copyright 2016-2023 Victor Eijkhout eijkhout@tacc.utexas.edu
 ****
 **** container.cxx : inherit from standard container
 ****
 ****************************************************************/

#include <iostream>
using std::cin;
using std::cout;

#include <vector>
#include <string>
class namedvector
  : public std::vector<int> {
private:
  std::string _name;
public:
  namedvector
    ( std::string n,int s )
    : _name(n)
    ,std::vector<int>(s) {};
  auto name() {
    return _name; };
};



int main() {

  namedvector fivevec("five",5);
  cout << fivevec.name()
       << ": "
       << fivevec.size()
       << '\n';
  cout << "at zero: "
       << fivevec.at(0)
       << '\n';

  

  return 0;
}
