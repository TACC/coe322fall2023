#include<iostream>
using std::cout;

void swap( int& i, int& j) {
  int tmp=i;
  i=j;
  j=tmp;
  return; // not needed
}

int main() {
  int i=1, j=2;
  swap(i,j);
  cout << i << "," << j << '\n';
  return 0;
}
