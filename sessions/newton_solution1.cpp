/****************************************************************
 ****
 **** This file belongs with the course
 **** Introduction to Scientific Programming in C++/Fortran2003
 **** copyright 2016-2023 Victor Eijkhout eijkhout@tacc.utexas.edu
 ****
 **** newton.cpp : newton scalar example
 ****
 ****************************************************************/

#include <iostream>
using std::cin;
using std::cout;
#include <cmath>
#include <functional>
using std::function;

double newton_root( function< double(double) > f, function< double(double) > fprime ) {
  double x{1.};
  while ( true ) {
    // option with naming: 
    // auto fx = f(x);
    // alternatively, direct application
    float fx = [] (double x) -> double { return x*x-2; } (x);
    cout << "f( " << x << " ) = " << fx << '\n';
    if (std::abs(fx)<1.e-10 ) break;
    x = x - fx/fprime(x);
  }
};

int main() {

  // not needed to introduce a variable
  // auto f = [] (double x) -> double { return x*x-2; };
  auto  fprime = [] (double x) -> double { return 2*x; };


  return 0;
}

// C-<Space> : set mark
// C-w : delete between cursor and mark
