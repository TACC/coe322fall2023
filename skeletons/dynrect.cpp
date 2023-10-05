#include <memory>
using std::shared_ptr;
using std::make_shared;

class Point {
private:
  float x,y;
public:
  void scale( float factor ) {
    // stuff
  };
};

class Rectangle {
private:
  Point bl;
  Point tr;
};

class DynRectangle {
private:
  shared_ptr<Point> bl,tr;
public:
  DynRectangle( shared_ptr<Point> ibl,itr ) 
    : bl(ibl),tr(itr) {};
};

int main() {
  // point origin: (0,0)
  // point fivetwo: (5,2)
  auto origin = make_shared<Point>(0,0);

  // make dynamic rectangle
  DynRectangle dyn52( ???? );
  // print area

  // fivetwo.scale(2.)
  
  // print area of dynamic rectangle

  return 0;
}

  // emacs:
  // C-x 3 : two panes
  // C-x C-f : edit 2nd file
  // C-space, move cursor, ESC w : cut block
  // C-x o : other pane
  // C-y : paste
