#include <iostream>
#include <string>
using namespace std;

class Point {
  double x;
  double y;

  static string clean_double_to_string(double);

public:
  Point();
  Point(double, double);

  double getX();
  double getY();

  Point operator+(const Point &);
  Point operator-(const Point &);
  double distance(Point);
  string to_string();
  friend ostream &operator<<(ostream &os, const Point &p);
};

Point operator*(int, Point);
