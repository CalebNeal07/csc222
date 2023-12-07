#include <iostream>
#include <string>
using namespace std;

class Point {
  double x;
  double y;

public:
  Point();
  Point(double, double);

  Point operator+(const Point &);
  Point operator-(const Point &);
  string to_str();
  friend ostream &operator<<(ostream &os, const Point &p);
};
