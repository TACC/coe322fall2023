/****************************************************************
 ****
 **** This file belongs with the course
 **** Introduction to Scientific Programming in C++/Fortran2003
 **** copyright 2016-8 Victor Eijkhout eijkhout@tacc.utexas.edu
 ****
 **** dynrectangle.cxx : make a rectangle from pointers
 ****
 ****************************************************************/

#include <iostream>
using std::cin;
using std::cout;

#include <cmath>
using std::sqrt;

#include <vector>
using std::vector;

#include <memory>
using std::make_shared,std::shared_ptr;

class Point {
protected:
  float x,y;
public:
  Point(float ux,float uy) { x = ux; y = uy; };
  float distance(Point other) {
    float xd = x-other.x, yd = y-other.y;
    return sqrt( xd*xd + yd*yd );
  };
  void scale( float by ) { x *= by; y *= by; };
  float dx( Point other ) { return x-other.x; };
  float dy( Point other ) { return y-other.y; };
  float get_x() { return x; };
  float get_y() { return y; };
};

class Rectangle {
private:
  Point bottom_left,top_right;
public:
  Rectangle( Point bl,Point tr )
    : bottom_left(bl),top_right(tr) {};
  float area() {
    float
      xsize = bottom_left.dx(top_right),
      ysize = bottom_left.dy(top_right);
    return xsize*ysize;
  };
};

class DynRectangle {
private:
public:
  // constructor:
  // area function:
};

int main() {

  auto
    origin  = make_shared<Point>(0,0),
    fivetwo = make_shared<Point>(5,2);
  DynRectangle lielow( origin,fivetwo );

  // record the area:
  cout << "Area: " <<  lielow.area() << '\n';

  // scale the `fivetwo' point by two
  fivetwo->scale(2);

  // now the area should be 4x as much:
  cout << "Area: " <<  lielow.area() << '\n';

  return 0;
}
