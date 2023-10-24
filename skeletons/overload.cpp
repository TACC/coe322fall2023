/****************************************************************
 ****
 **** This file belongs with the course
 **** Introduction to Scientific Programming in C++/Fortran2003
 **** copyright 2016-2023 Victor Eijkhout eijkhout@tacc.utexas.edu
 ****
 **** linear.cxx : function class
 ****
 ****************************************************************/

#include <iostream>
using std::cin;
using std::cout;

#include <cmath>
using std::sqrt;

class Point {
public:
  float x,y;
public:
  Point(float ux,float uy)
    : x(ux),y(uy) {};
  float distance(Point other) {
    float xd = x-other.x, yd = y-other.y;
    return sqrt( xd*xd + yd*yd );
  };
  Point operator*( float f ) {
    return Point( x*f,y*f );
  }
  void printout() {
    cout << "Point: " << x << "," << y << '\n';
  };
};

class LinearFunction {
private:
  Point p1,p2;
public:
  LinearFunction( Point input_p2 )
    : LinearFunction( Point(0.,0.), input_p2 ) {}
  LinearFunction( Point input_p1,Point input_p2 )
    : p1(input_p1),p2(input_p2) {};
  float evaluate_at( float x ) {
    float slope = (p2.y-p1.y) / (p2.x-p1.x);
    float intercept = p1.y - p1.x * slope;
    return intercept + x*slope;
  };
};

int main() {
  Point p1 = Point(1.0,1.0), p2 = Point(2.0,1.5);

  /*
   * multiply a point
   */
  Point p3 = p1*3.5;
  p3.printout();
  
  /*
   * Add points together
   */
#if 0
  Point p4 = p1+p3*2;
  p4.printout();
#endif
  
  LinearFunction line(p1,p2);
  cout << "Value at 4.0: " << line.evaluate_at(4.0) << '\n';

#if 0
  float y = line(4.0);
  cout << y << '\n';
#endif
  
  return 0;
}
