#include <iostream>
using std::cout;

void swap_wrong1( int *i,int *j ) {
  // i & j are copies of the address
  auto tmp = i;
  i = j;
  j = tmp;
  cout << "f: i=" << i << ", j=" << j << '\n';
}

void swap_yes_its_correct_but( int *i,int *j ) {
  // i & j are copies of the address
  auto tmp = *i;
  *i = *j;
  *j = tmp;
}

void swap( int *ii,int *jj ) {
  int i = *ii, j = *jj;
  // i & j are copies of the address
  auto tmp = i;
  i = j;
  j = tmp;
  // put stuff back
  *ii = i; *jj = j;
}

int main() {
  int i=1,j=2;
  swap(&i,&j);
  cout << "i=" << i << ", j=" << j << '\n';
  return 0;
}
