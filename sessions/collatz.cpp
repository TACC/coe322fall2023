#include <iostream>
using std::cout; 

int main() {
  // find the start of the longest sequence under 1000
  int longest_length=0;
  int start_of_longest=0;
  // go through all starting points, record lenght, update max if longer
  for ( int starting_value=2; starting_value<1000; starting_value++ ) {
    // record length of sequence from starting_value
    int length=0;
    // make sequence
    int current=starting_value;
    while ( current!=1 /* current not 1 */ ) {
      // update current and record one more step
      if (current%2==0)
	current = current/2;
      else 
	current = 3*current+1;
      length++;
    }
    // if length is greater, update max
    if (length>longest_length) {
      longest_length = length; start_of_longest = starting_value; 
      cout << "At start " << starting_value << " new record: " << length << '\n';
    }
  }

  return 0;
}
