#include <iostream>
using std::cout;

float power( float x,int n ) {
  float result=1.f;
  for (int c=1; c<=n; c++ )
    result *= x;
  return result;
}

int main() {
  // compute e for bunch of n values
  for ( // n runs to large
       int n=1; ; n*=2
	) {
    // compute the e as value of n
    auto e = // n-th power of fraction
      power( 1+1/static_cast<float>(n), n );
    cout << n << ": " << e << '\n';
  }

  return 0;
}
