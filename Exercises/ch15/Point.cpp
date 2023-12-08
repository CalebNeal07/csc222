#include "Point.h"
using namespace std;

Point::Point() {
  x = 0;
  y = 0;
}

Point::Point(double x, double y) {
  this->x = x;
  this->y = y;
}

string Point::to_string() {
  return "(" + std::to_string(this->x) + ", " + std::to_string(this->y) + ")";
}

Point Point::operator+(const Point &p) {
  return Point(this->x + p.x, this->y + p.y);
}

Point Point::operator-(const Point &p) {
  return Point(this->x - p.x, this->y - y);
}
ostream &operator<<(ostream &os, const Point &p) {
  os << "(" << p.x << ", " << p.y << ")";
  return os;
}
