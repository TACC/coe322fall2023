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

#if 0
// remove the if/endif lines to use this as a basis for the exercise
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
#endif



int main() {

  namedvector<float> fivetemp("five",5);
  cout << fivetemp.name()
       << ": "
       << fivetemp.size() << '\n';
  cout << "at zero: "
       << fivetemp.at(0) << '\n';
  
  using namespace geo;
  geo::vector<float> float4("four",4);
  cout << float4.name() << '\n';
  float4[1] = 3.14;
  cout << float4.at(1) << '\n';
  geo::vector<std::string> string3("three",3);
  string3.at(2) = "abc";
  cout << string3[2] << '\n';

  return 0;
}
