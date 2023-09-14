/****************************************************************
 ****
 **** This file belongs with the course
 **** Introduction to Scientific Programming in C++/Fortran2003
 **** copyright 2017-2023 Victor Eijkhout eijkhout@tacc.utexas.edu
 ****
 **** poitnclass.cxx : Point class skeleton
 ****
 ****************************************************************/

#include <iostream>
using std::cin;
using std::cout;

#include <string>
using std::string;

#include <cmath>
using std::sqrt;

class Point {
private:
  float x,y;
public:
  Point( float u ) { x=u; y=u; };
  Point(float ux,float uy) { x = ux; y = uy; };
  float distance_to_origin() {
    return sqrt( x*x + y*y );
  };
  float angle() {
    return atan2(y,x);
  };
  float distance(Point other) {
    float dx = x-other.x, dy = y-other.y;
    return sqrt( dx*dx + dy*dy );
  };
  Point halfway( Point other ) {
    float hx = (x+other.x)/2;
    float hy = (y+other.y)/2;
    Point h(hx,hy); return h;
    //    return Point(hx,hy);
  };
};

class LinearFunction {
private:
  Point p1,p2;
public:
  LinearFunction( Point i1,Point i2 )
    : p1(i1),p2(i2) {};
  float evaluate_at( float x ) {
  };
};

class Rectangle {
private:
  Point bl;
  float w,h;
protected:
  string type{"rectangle"};
public:
  Rectangle( Point botleft,float wid,float hit ) 
    // member initializer list
    : bl(botleft), w(wid), h(hit) {
  }
  float area() { return w*h; };
};

class Square : public Rectangle {
public :
  Square( Point botleft,float wid )
    // invoke constructor of base class
    : Rectangle( botleft,wid,wid ) {
    // just to show that you may need to do
    // something in the constructor.
    type = "square";
  };
};

int main() {
  Point p1(1.0,1.0);
  float d = p1.distance_to_origin();
  cout << "Distance to origin: "
       << d << '\n';
  cout << "angle: " << p1.angle() << '\n';
  Point p2(2.,2.);
  cout << "between points: " 
       << p1.distance(p2) << '\n';
  Point h = p1.halfway(p2);
  
  
  // using the other construct
  Point diag(5);

  LinearFunction( p1,p2 );

  Rectangle r( p1,5,2 );

  Square s( p1,3.16 );
  cout << "Area of square: " << s.area() << '\n';

  return 0;
}

// emacs
// C-f forward
// C-b backward
// Esc f word forward
// Esc b work backward

// C-t toggle two characters
// ESC t togle words

// C-x 2 : divide screen vertically
// C-x 3 : dividde screen horizontally
// C-x o : go to other panel
// C-x 0 : remove other panels

// C-l : current line to mid/top/bot of screen
