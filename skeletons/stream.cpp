#include <iostream>
using std::cout;

class Stream { 
private:
  int last_result{0}; 
public:
  int next() {
    return last_result++; };
};

int main() {

  bool morethan100;
  {
    Stream ints;
    // Prove: there is an integer > 100
    // P(n) := n>100
    // P(0) or P(1) or P(2) or ....

    morethan100 = false;
    for (;;) {
      int thisint = ints.next();
      morethan100 = morethan100 or (thisint>100);
      if (morethan100) {
	cout << "true\n";
	break; }
    }
  }
  // now `morethan100' has the right value

  bool allnonneg;
  {
    Stream ints;
    // Prove: all integers>=0
    allnonneg = true;
    for (;;) {
      int thisint = ints.next();
      allnonneg = allnonneg and (thisint>=0);
    }  
  }
  // now `allnonneg' has the right value


  // Prove: for all n there is m>2*n
  {
    Stream ints;
  }

  return 0;
}

// C-space set mark
// "region" is between cursor and mark
// C-i : indent region
