/****************************************************************
 ****
 **** This file belongs with the course
 **** Introduction to Scientific Programming in C++/Fortran2003
 **** copyright 2018-2022 Victor Eijkhout eijkhout@tacc.utexas.edu
 ****
 **** range.cxx : range-based iteration over a class
 ****
 ****************************************************************/

/*
 * NOTE
 * first "module load gcc/11"
 * and   "module load rangev3"
 * then compile this with
 * g++ -I${TACC_RANGEV3_INC} filter.cpp
 */

#include <iostream>
using std::boolalpha;
using std::cout;

#include <vector>
using std::vector;

#include <algorithm>
using std::any_of;
// #include <ranges>
// NOTE
#include <range/v3/all.hpp>

int main() {

  cout << "Filter\n";
  vector<float> numbers
    {1,-2.2,3.3,-5,7.7,-10};
  auto pos_view =
    numbers
    // NOTE: not std::ranges but just `ranges'
    | ranges::views::filter
      ( [] (int i) -> bool {
          return i>0; }
       );
  for ( auto n : pos_view )
    cout << n << " ";
  cout << '\n';
  cout << " .. filter\n";

  cout << "Count\n";
  cout << " .. count\n";

  return 0;
}
