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

#include <fmt/format.h>
using fmt::format,fmt::print;

#include <memory>
using std::make_shared,std::shared_ptr;

class Point {
protected:
  float x,y;
public:
  Point(float ux,float uy) { x = ux; y = uy; };
  // Point class methods
  float dx( Point other ) {
    return other.x-x; };
  float dy( Point other ) {
    return other.y-y; };
  float distance(Point other) {
    float wd = dx(other), ht = dy(other);
    return sqrt( wd*wd + ht*ht );
  };
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

  {
    // main, with objects
    Point
      oneone(1,1), fivetwo(5,2);
    float dx = oneone.dx(fivetwo);
    print( "dx: {}\n",dx );	   
  }

  {
    // main, with pointers
    auto
      oneonep  = make_shared<Point>(1,1),
      fivetwop = make_shared<Point>(5,2);
    print( "dx: {}\n",dx );	   
  }

  {
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
  }

  return 0;
}
