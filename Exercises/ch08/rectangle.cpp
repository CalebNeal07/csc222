#include <cstdlib>
#include <iostream>
#include "rectangle.h"
using namespace std;

Point lower_right(Rectangle);
double find_area(Rectangle);

int main() {
  Rectangle rect_a = {
    {5.2, 3.4},
    3.4,
    5.6
  };

  Point rect_lr_corner = lower_right(rect_a);

  cout << "A rectangle with a width of " << rect_a.width << " a height of " << rect_a.height
       << " and an upper-left corner at (" << rect_a.corner.x << ", " << rect_a.corner.y
       << ") has an lower-right corner at (" << rect_lr_corner.x << ", " << rect_lr_corner.y << ")."
       << " That rectangle also has an area of " << find_area(rect_a) << "."; 


  return EXIT_SUCCESS;
}  
  
Point lower_right(Rectangle rect) {
  Point new_point;

  new_point.x = rect.corner.x + rect.width;
  new_point.y = rect.corner.y - rect.height;

  return new_point;
}

double find_area(Rectangle rect) {
  return rect.width * rect.height;
}

