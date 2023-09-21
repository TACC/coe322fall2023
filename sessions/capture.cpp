#include <iostream>
using std::cin;
using std::cout;

int main() {
  int inc;
  cin >> inc; // I input 7
  auto increment = [inc] ( int input ) -> int {
    return input + inc;
  };
  cout << increment(1) << '\n'; // gives: 8
  inc = 5;
  cout << increment(1) << '\n'; // again gives: 8


  auto increment_by = [] ( int input, int inc ) -> int {
    return input + inc;
  };
  increment_by(1,3);
}
