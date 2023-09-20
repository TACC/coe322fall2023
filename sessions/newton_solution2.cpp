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
     auto fx = f(x);
    cout << "f( " << x << " ) = " << fx << '\n';
    if (std::abs(fx)<1.e-10 ) break;
    x = x - fx/fprime(x);
  }
  return x;
};

int main() {

  auto f = [] (double x ) { return x*x-2; }; 
  auto fprime = [] ... ;
  auto root = newton_root( f,fprime );
  // alternatively
  // newton_root( [] () { .... }, [] () { ... } );
  cout << root << '\n';

  return 0;
}

// C-<Space> : set mark
// C-w : delete between cursor and mark
